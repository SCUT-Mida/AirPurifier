/*-------------------------------------------*/
/******13232������������оƬ��ST7567********/
/**********Programmed By Yangda***************/
/*-------------------------------------------*/

#include "lcd.h"
#include "pin.h"
#include "gpio.h"
#include "delay.h"
#include "lcdcode.h"

#define LCD_CSB 		LCD_CSB_PIN   	//For LCD13232 CSB
#define LCD_RESB 		LCD_RESB_PIN    //For LCD13232 Reset
#define LCD_A0 			LCD_A0_PIN      //For LCD13232 A0
#define LCD_SCLK		LCD_SCLK_PIN    //For LCD13232 Clock
#define LCD_SID			LCD_SID_PIN     //For LCD13232 SID

#define _nop_()     __ASM("NOP\n\t")    //Define the nop();

void SendBit(uint8_t dat,uint8_t bitcnt)	  /*��LCD����bitcnt����*/
{
	uint8_t i;
	GpioWrite(LCD_SCLK, 1);
	_nop_();
	_nop_();
	for(i=0;i<bitcnt;i++)
	{
		if(( dat & 0X80 ) == 0)
			GpioWrite(LCD_SID, 0);
		else
			GpioWrite(LCD_SID, 1);
		_nop_();
		_nop_();
		GpioWrite(LCD_SCLK, 0);
		DelayUs(1);
		GpioWrite(LCD_SCLK, 1); 
		DelayUs(1);
		dat=dat<<1; 
	}
}


void WriteData(uint8_t uc_dat)	   /*��LCDд1�ֽ�����*/
{
	GpioWrite(LCD_CSB, 0);
	_nop_();
	_nop_();
	GpioWrite(LCD_A0, 1);
	_nop_();
	_nop_();
	SendBit(uc_dat,8);
	_nop_();
	_nop_();
	DelayUs(10);
	GpioWrite(LCD_CSB, 1);
}


void WriteCommand(uint8_t uc_cmd)		/*��LCDд��������*/
{
	GpioWrite(LCD_CSB, 0);
	_nop_();
	_nop_();
	GpioWrite(LCD_A0, 0);
	_nop_();
	_nop_();
	SendBit(uc_cmd,8);
	_nop_();
	_nop_();
	DelayUs(10);
	GpioWrite(LCD_CSB, 1);
}


void SetLcdAddress(uint8_t page,uint8_t column)			 /*����LCD��ַ����������LCDд����*/
{
	GpioWrite(LCD_CSB, 0);							  /*�е�ַ��������ҳ��ַ��������*/
	WriteCommand(START_PAGE_ADDRESS-page);   //��������дҳ��ַ
	WriteCommand(((column>>4)&0x0f)+0x10);	 //���ø���λ���е�ַ
	WriteCommand(column&0x0f);	 			 //���õ���λ���е�ַ		
}


void Initial()		     //��ʾ��ʼ������
{
	GpioWrite(LCD_CSB, 0);
	WriteCommand(0xA1);//set seg direct	  A0=seg0��131    /	 A1=seg131��0	
	WriteCommand(0xC8);//set com direct	C0=COM0��COM63	 / 	 C8=COM63��COM0	
	WriteCommand(0xA2);//set lcd bias	
  WriteCommand(0x24);//set internal rb/ra	
	WriteCommand(0xf8); //��ѹ����
	WriteCommand(0x00);  //4x vdd
	WriteCommand(0x2F);//all power on
	WriteCommand(0x40); //0�п�ʼ	
	WriteCommand(0x81);//set contrast
	WriteCommand(25);  //ԭΪ30Ч��  ����ֵΪ�Աȶȵ���
	WriteCommand(0xAF);//dispaly on
}


void ClearScreen(void)		//����
{
	uint8_t page_cnt,column;
	for(page_cnt=0;page_cnt<4;page_cnt++)
	{
		SetLcdAddress(page_cnt,0);
		for(column=0;column<132;column++)
			WriteData(0x00);		
	}
}


void InitLCD()    //��ʼ����ʾ��
{
	GpioConfig(LCD_CSB,OUTPUT);
	GpioConfig(LCD_RESB,OUTPUT);
	GpioConfig(LCD_A0,OUTPUT);
	GpioConfig(LCD_SCLK,OUTPUT);
	GpioConfig(LCD_SID,OUTPUT);              //Config the LCD's PIN as Output

	GpioWrite(LCD_RESB, 0);
	DelayUs(20);

	GpioWrite(LCD_RESB, 1);
	DelayUs(20);

	Initial();
	ClearScreen();
}


/***�ָ�Ϊ32���ֿ����Ϊ�����ַ��������ã�����Ϊ4��8��12��16��24��32***/
uint16_t DisplayStrH32(uint16_t StrWidth,uint16_t column,uint8_t *StrCode)		
{
	uint16_t page_cnt,col_cnt;

	Initial();
	for (page_cnt=0;page_cnt<4;page_cnt++)
	{
		SetLcdAddress(page_cnt,column);
		for (col_cnt=0;col_cnt<StrWidth;col_cnt++)
		{
			WriteData(StrCode[page_cnt*StrWidth + col_cnt]);
		}
	}
	DelayMs(1);
	return 	StrWidth;		 //�����ֿ�
}


void LcdDisplayInit(void)	   //��ʾ����ʼ��...������ 
{
	uint16_t column = 0;
	uint8_t  DotShowFlag;
	ClearScreen();
	column +=DisplayStrH32(32,column,(uint8_t *)ChuShiHuaCode32x32[0]);
	column +=DisplayStrH32(32,column,(uint8_t *)ChuShiHuaCode32x32[1]);
	column +=DisplayStrH32(32,column,(uint8_t *)ChuShiHuaCode32x32[2]);
	for(DotShowFlag = 0;DotShowFlag < 6 ;DotShowFlag++)
	{
		column = 96 + DotShowFlag*6 + 1;	   						//һ����6�п��ӵ�2�п�ʼ��ʾ
		DelayMs(50);
		DisplayStrH32(4,column,(uint8_t *)DotCode4x32);
	}
}

void LcdDisplayPM25(float PM25)    				//LCD��ʾ�۳�
{
	uint16_t column = 0;
	uint16_t ShowPM25 = PM25 * 10 ;       //����С�����һλ
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[FENchen]);
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[fenCHEN]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowPM25/100)%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowPM25/10)%10]);
	column +=DisplayStrH32(4,column,(uint8_t *)DotCode4x32);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[ShowPM25%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)UintCode16x32[FENchen]);	
}


void LcdDisplayFormaldehyde(float formaldehyde)    //LCD��ʾ��ȩ
{
	uint16_t column = 0;
	uint16_t ShowFormaldehyde = formaldehyde * 100 ;       //����С�������λ
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[JIAquan]);
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[jiaQUAN]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowFormaldehyde/100)%10]);
	column +=DisplayStrH32(4,column,(uint8_t *)DotCode4x32);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowFormaldehyde/10)%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[ShowFormaldehyde%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)UintCode16x32[jiaQUAN]);	
}

void LcdDisplayTemp(float Temp)    		//LCD��ʾ�¶�
{
	uint16_t column = 0;
	uint16_t ShowTemp = Temp * 10 ;       //����С�����һλ
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[WENdu]);
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[wenshiDU]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowTemp/100)%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowTemp/10)%10]);
	column +=DisplayStrH32(4,column,(uint8_t *)DotCode4x32);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[ShowTemp%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)UintCode16x32[WENdu]);	
}


void LcdDisplayHumi(float Humi)    				//LCD��ʾʪ��
{
	uint16_t column = 0;
	uint16_t ShowHumi = Humi * 10 ;       //����С�����һλ
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[SHIdu]);
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[wenshiDU]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowHumi/100)%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(ShowHumi/10)%10]);
	column +=DisplayStrH32(4,column,(uint8_t *)DotCode4x32);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[ShowHumi%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)UintCode16x32[SHIdu]);	
}

void LcdDisplayTime(CalenderTime rtc)    			//LCD��ʾʱ��
{
	uint16_t column = 0;
	ClearScreen();
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.year/10]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.year%10]);
	column +=DisplayStrH32(2,column,(uint8_t *)TimeSeparationCode2x32[0]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.month/10]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.month%10]);
	column +=DisplayStrH32(2,column,(uint8_t *)TimeSeparationCode2x32[0]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.date/10]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.date%10]);
	column += 4;
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.hour/10]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.hour%10]);
	column +=DisplayStrH32(2,column,(uint8_t *)TimeSeparationCode2x32[1]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.minute/10]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.minute%10]);
	column +=DisplayStrH32(2,column,(uint8_t *)TimeSeparationCode2x32[1]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.second/10]);
	column +=DisplayStrH32(10,column,(uint8_t *)NumCode10x32[rtc.second%10]);
}


void LcdDisplayFanSpeed(uint16_t speed)    			//LCD��ʾ�ٶ�
{
	uint16_t column = 0;
	ClearScreen();
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[ZHUANsu]);
	column +=DisplayStrH32(32,column,(uint8_t *)HanziCode32x32[zhuanSU]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(speed/1000)%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(speed/100)%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[(speed/10)%10]);
	column +=DisplayStrH32(16,column,(uint8_t *)NumCode16x32[speed%10]);
}













