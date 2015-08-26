#ifndef __LCD13232_H
#define __LCD13232_H

#include <stdbool.h>
#include <stdint.h>
#include <rtc.h>

#define START_PAGE_ADDRESS  0xB3    //��ʼҳ��ַ����LCD���ϵ�����0xB3->0xB0

typedef enum{
	FENchen  	= 0 ,	 //"��"
	jiaQUAN  	= 1 ,	 //"ȩ"	
	WENdu    	= 2 ,	 //"��"
	SHIdu    	= 3 ,	 //"ʪ"
	SHIjian   = 4 ,	 //"ʱ"	
	ZHUANsu		= 5	,	 //"ת"
	wenshiDU  = 6 ,	 //"��"
	fenCHEN   = 7 ,	 //"��"
	JIAquan  	= 8 ,	 //"��"
	zhuanSU   = 9 ,  //"��"	
	shiJIAN   = 10,  //"��"
} CODE_FLAG;

void InitLCD(void);    						 //��ʼ����ʾ��
void ClearScreen(void);						 //����
void LcdDisplayInit(void);            //��ʾ����ʼ��...������ 

/***�ָ�Ϊ32���ֿ����Ϊ�����ַ��������ã�����Ϊ4��8��12��16��24��32***/
uint16_t DisplayStrH32(uint16_t StrWidth,uint16_t column,uint8_t *StrCode);

void LcdDisplayTemp(float Temp);    				//LCD��ʾ�¶�
void LcdDisplayHumi(float Humi);    				//LCD��ʾʪ��
void LcdDisplayPM25(float PM25);    				//LCD��ʾ�۳�
void LcdDisplayFormaldehyde(float formaldehyde);    //LCD��ʾ��ȩ
void LcdDisplayTime(CalenderTime rtc);    			//LCD��ʾʱ��
void LcdDisplayFanSpeed(uint16_t speed);    			//LCD��ʾ����ٶ�
    
#endif
