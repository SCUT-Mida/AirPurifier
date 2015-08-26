#ifndef __LCDCODE_H
#define __LCDCODE_H

#define uchar_code const unsigned char

uchar_code HanziCode32x32[][128]={		//汉字粗体32x32：粉(0)醛(1)温(2)湿(3)时(4)转(5)度(6)尘(7)甲(8)速(9)间(10)
{0x00,0x00,0x00,0x02,0x01,0x00,0x00,0x00,0x3F,0x1F,0x00,0x00,0x03,0x07,0x06,0x00,
0x00,0x01,0x1F,0x0E,0x08,0x00,0x38,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x08,0x0C,0x08,0xC8,0xE8,0x08,0x0B,0xFF,0xFF,0x28,0x48,0x88,0x08,0x07,0x04,
0x38,0xE0,0x80,0x00,0x00,0x00,0x00,0x80,0xE0,0x39,0x1C,0x0F,0x06,0x04,0x00,0x00,
0x00,0x00,0x00,0x03,0x06,0x1C,0x70,0xC0,0xFF,0xFF,0x80,0x40,0x70,0x38,0x00,0x80,
0x80,0x81,0xFF,0xF8,0x80,0x80,0x80,0x80,0x9F,0xFF,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0xFE,0xFC,0x00,0x02,0x02,0x04,0x08,0x18,
0x70,0xC0,0x80,0x00,0x08,0x08,0x0C,0x0E,0xFC,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},/*"粉",0*/

{0x00,0x08,0x0C,0x0C,0x08,0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x08,0x08,0x18,0x1A,0x0A,
0x02,0x02,0x1F,0x1F,0x12,0x02,0x02,0x02,0x1F,0x1F,0x0A,0x02,0x06,0x06,0x02,0x00,
0x00,0x00,0x00,0x7F,0x7F,0x20,0xFF,0xFF,0xE0,0xFF,0xFF,0x20,0x7F,0x7F,0x7F,0x00,
0x00,0x03,0xC7,0xCE,0x3C,0xF8,0xF0,0x5C,0xCE,0xC7,0x03,0x03,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0x72,0xE2,0x82,0x02,0xE2,0xE2,0x62,0xFF,0xFF,0xFF,0x60,
0xE0,0xA1,0x21,0x21,0x21,0x3F,0x3F,0x21,0x21,0x63,0x63,0xE3,0xE0,0xC0,0x80,0x00,
0x00,0x00,0x00,0xFC,0xFC,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xFC,0xFC,0xFC,0x0C,
0x0C,0x08,0x08,0x08,0x08,0xF8,0xF8,0x08,0x08,0x08,0x08,0x18,0x18,0x08,0x00,0x00},/*"醛",1*/

{0x00,0x00,0x00,0x00,0x10,0x18,0x1E,0x0E,0x06,0x00,0x01,0x01,0x1F,0x1F,0x0F,0x08,
0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x1F,0x1F,0x08,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x20,0x38,0x1E,0x1E,0x0C,0x01,0x1F,0xFE,0xE0,0x00,0xFF,0xFF,0xFF,0x42,
0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x02,0x03,0x07,0x3F,0xFF,0xE0,0x00,0x3F,0x3F,0x9F,0x90,0x10,0x1F,
0x1F,0x1F,0x10,0x10,0x1F,0x1F,0x1F,0x10,0x10,0x1F,0x3F,0x3F,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF8,0xFC,0xFC,0x04,0x04,0x04,0xFC,0xFC,0xFC,0x04,0x04,0xFC,
0xFC,0xFC,0x04,0x04,0xFC,0xFC,0xFC,0x04,0x04,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x04},/*"温",2*/

{0x00,0x00,0x00,0x00,0x10,0x1C,0x0F,0x0F,0x06,0x00,0x00,0x00,0x1F,0x1F,0x0F,0x08,
0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0F,0x0F,0x0F,0x08,0x00,0x00,0x00,
0x00,0x00,0x20,0x38,0x1E,0x1E,0x0E,0x01,0x1F,0xFE,0xE0,0x00,0xFF,0xFF,0xFF,0x44,
0x45,0x45,0x44,0x44,0x44,0x45,0x45,0x44,0x44,0xFE,0xFE,0xFE,0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x04,0x07,0x1F,0x7F,0xF8,0xC0,0x00,0x30,0x3C,0x1F,0x0F,0x07,0x00,
0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x03,0x07,0x1E,0x3C,0x38,0x30,0x00,0x00,
0x00,0x00,0x00,0x30,0xF8,0xF8,0xF8,0x00,0x04,0x04,0x04,0x04,0x84,0x84,0x84,0x04,
0xFC,0xFC,0xFC,0x04,0x04,0xFC,0xFC,0xFC,0x84,0x04,0x04,0x0C,0x1C,0x1C,0x0C,0x04},/*"湿",3*/

{0x00,0x00,0x00,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x07,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x3F,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0xFF,0xFF,0xFF,0x20,0x22,0x23,
0x21,0x21,0x20,0x20,0x20,0x20,0xFF,0xFF,0xFF,0x20,0x20,0x60,0x60,0x60,0x20,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0xFF,0xFF,0xFF,0x00,0x00,0x80,
0xE0,0xF0,0xF0,0x20,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0x00,0x00,0x00,
0x00,0x08,0x08,0x08,0x08,0x0E,0xFE,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"时",3*/

/*{0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x3F,0x3F,0x1F,0x01,0x01,
0x01,0x01,0x01,0x01,0x3F,0x3F,0x1F,0x11,0x01,0x01,0x03,0x07,0x07,0x03,0x01,0x00,
0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0xE2,0xE2,0xE3,0x03,0x03,
0x7F,0x7F,0x3F,0x03,0xE2,0xE2,0xE2,0x02,0x02,0x06,0x06,0x0E,0x0E,0x06,0x02,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x1E,0x3C,0x78,0xF0,0xC0,0x80,
0xFF,0xFF,0xFF,0x80,0xE0,0x7B,0x3F,0x1F,0x0F,0x07,0x03,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x20,0x20,0x60,0xC0,0xC0,0x80,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0xFE,0xFE,0xFC,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,0x80,0x80,0x80},*//*"苯",4*/

{0x00,0x00,0x01,0x01,0x01,0x01,0x0F,0x3F,0x3F,0x11,0x01,0x03,0x03,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x07,0x3F,0x3F,0x30,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x0F,0xFF,0xFD,0xC1,0x3F,0x3F,0x1F,0x11,0x03,0x03,0x03,0x82,
0x82,0x82,0x83,0xBF,0xFF,0xF2,0x82,0x82,0x82,0x82,0x82,0x86,0x8E,0x8E,0x06,0x02,
0x00,0x00,0x01,0x81,0x83,0x83,0x03,0x02,0xFF,0xFF,0xFF,0x04,0x0C,0x08,0x08,0x08,
0x00,0x70,0xF0,0xF0,0x10,0x10,0x10,0x13,0x17,0x3E,0x3C,0x38,0x10,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0xFE,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0xC0,0x40,0x60,0x30,0xF8,0xFC,0x1E,0x1E,0x0C,0x00,0x00,0x00,0x00,0x00},/*"转",5*/

{0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x03,0x02,0x02,0x02,0x02,0x03,0x03,0x02,0x22,
0x3A,0x3E,0x1E,0x0A,0x02,0x03,0x03,0x02,0x02,0x02,0x06,0x0E,0x0E,0x06,0x02,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x10,0x10,0x10,0x10,0x10,0xFF,0xFF,0xFF,
0x10,0x10,0x10,0x10,0x10,0xFF,0xFF,0xFF,0x90,0x10,0x30,0x30,0x30,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0xFF,0xFE,0xC0,0x00,0x00,0x10,0x10,0x10,0xD8,0xDC,0x97,
0x93,0x91,0x90,0x90,0x91,0xD7,0xDF,0xBE,0x3C,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0x0E,0x7C,0xF0,0xC0,0x02,0x02,0x02,0x02,0x06,0x04,0x0C,0x0C,0x18,0x18,
0xB0,0xF0,0xE0,0xF0,0xF0,0xB8,0x18,0x1C,0x0C,0x0C,0x0C,0x0E,0x0E,0x04,0x00,0x00},/*"度",6*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x01,0x00,0x00,0x00,0x00,0x3F,
0x1F,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x02,0x06,0x0C,0x18,0x30,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x70,0x3C,0x1E,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x7F,
0x7F,0x24,0x04,0x04,0x04,0x04,0x04,0x04,0x0C,0x1C,0x0C,0x04,0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,
0xFC,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0C,0x1C,0x1C,0x0C,0x04,0x00},/*"尘",7*/

{0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x0F,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x07,
0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xFF,
0xFF,0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xFF,
0xFF,0xFF,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0xF8,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,
0xFE,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"甲",8*/

{0x00,0x00,0x00,0x00,0x0C,0x0F,0x07,0x03,0x01,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x3F,0x3F,0x1F,0x11,0x01,0x01,0x01,0x01,0x03,0x06,0x06,0x02,0x00,0x00,
0x00,0x00,0x02,0x02,0x02,0x02,0x87,0x87,0x07,0x02,0x00,0x00,0x3F,0x3F,0x1F,0x10,
0x10,0x10,0xFF,0xFF,0xFF,0x10,0x10,0x10,0x10,0x3F,0x3F,0x30,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xC1,0xC3,0xC7,0x8E,
0x9C,0xF8,0xFF,0xFF,0xFF,0x90,0x98,0x8C,0x8C,0xC6,0xC7,0x47,0x03,0x00,0x00,0x00,
0x00,0x00,0x18,0x38,0x38,0x60,0xC0,0xC0,0xC0,0x60,0x70,0xD8,0x98,0x0C,0x0C,0x0C,
0x0C,0x0C,0xF4,0xF4,0xE4,0x04,0x04,0x0C,0x0C,0x0C,0x0C,0x8C,0x8C,0x0C,0x08,0x00},/*"速",9*/

{0x00,0x00,0x00,0x00,0x03,0x03,0x21,0x39,0x1E,0x0F,0x0F,0x00,0x04,0x04,0x04,0x04,
0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0F,0x0F,0x0F,0x04,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x3F,0x3F,0x1F,0x10,0x10,
0x10,0x10,0x10,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x82,0x82,
0x82,0x82,0x82,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,
0x00,0x00,0x00,0x80,0x80,0x10,0x18,0x08,0x0C,0x0E,0xFE,0xFC,0xF8,0x00,0x00,0x00},/*"间",10*/
};

uchar_code NumCode16x32[][64]={	       //数字粗体16x32："0123456789" 
{0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x02,0x02,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x0F,0x7F,0xFF,0xF0,0x80,0x00,0x00,0x00,0x00,0x80,0xE0,0xFF,0x7F,0x0F,
0x00,0x00,0xF8,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xF8,
0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x60,0x20,0x20,0x60,0xE0,0xC0,0x80,0x00,0x00},/*"0",0*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x20,0x20,0x20,0x60,0xE0,0xE0,0xE0,0x60,0x20,0x20,0x20,0x00,0x00},/*"1",1*/

{0x00,0x00,0x00,0x00,0x01,0x03,0x02,0x02,0x02,0x02,0x03,0x03,0x01,0x01,0x00,0x00,
0x00,0x00,0x78,0xF8,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0xFF,0xFE,0x7C,0x00,
0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x18,0x30,0x60,0xC0,0x80,0x00,0x07,0x07,0x00,
0x00,0x00,0xE0,0xE0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xE0,0xE0,0x80,0x00},/*"2",2*/

{0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x03,0x03,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0xF0,0xF0,0xF0,0x00,0x01,0x01,0x01,0x03,0x87,0xFE,0xFC,0x78,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xFF,0x7F,0x1E,0x00,
0x00,0x00,0x80,0xC0,0xC0,0x60,0x20,0x20,0x20,0x20,0x60,0xC0,0xC0,0x80,0x00,0x00},/*"3",3*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x0E,0x3C,0x70,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x08,0x38,0x78,0xC8,0x88,0x08,0x08,0x08,0xFF,0xFF,0xFF,0xFF,0x08,0x08,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0xF0,0xF0,0xF0,0xF0,0x10,0x10,0x10},/*"4",4*/

{0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,
0x00,0x00,0x00,0x1F,0xFF,0xE3,0x06,0x04,0x04,0x04,0x06,0x07,0x03,0x01,0x00,0x00,
0x00,0x00,0x07,0x87,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x7E,0x00,
0x00,0x00,0x80,0xC0,0x60,0x20,0x20,0x20,0x20,0x20,0x60,0xC0,0xC0,0x80,0x00,0x00},/*"5",5*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,
0x00,0x00,0x07,0x3F,0x7F,0xF1,0x81,0x03,0x02,0x02,0x02,0x03,0xC3,0xC1,0xC0,0x00,
0x00,0x00,0xFC,0xFF,0xFF,0xC3,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x7E,
0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x60,0x20,0x20,0x20,0x60,0xC0,0xC0,0x80,0x00},/*"6",6*/

{0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,
0x00,0x00,0xF0,0xF0,0xC0,0x80,0x00,0x00,0x01,0x07,0x1E,0x78,0xE0,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x3F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"7",7*/

{0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x02,0x02,0x02,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x78,0xFC,0xFE,0x8F,0x07,0x03,0x01,0x01,0x01,0x87,0xFE,0xFC,0x78,0x00,
0x00,0x1F,0x3F,0x7F,0xE0,0xC0,0x80,0x80,0x80,0xC0,0xE0,0xF0,0x7F,0x3F,0x1F,0x00,
0x00,0x00,0x80,0xC0,0xC0,0x60,0x20,0x20,0x20,0x20,0x60,0xC0,0xC0,0x80,0x00,0x00},/*"8",8*/

{0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x02,0x03,0x01,0x00,0x00,0x00,0x00,
0x00,0x3F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xC1,0xFF,0x7F,0x1F,0x00,
0x00,0x00,0x81,0xC1,0xE1,0x60,0x20,0x20,0x20,0x60,0xC1,0xCF,0xFF,0xFE,0xF0,0x00,
0x00,0x00,0xC0,0xC0,0xE0,0x20,0x20,0x20,0x60,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00},/*"9",9*/
};

uchar_code DotCode4x32[]= 				    //"."加粗字符4x32
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0xC0,0xE0,0xE0,0xC0};/*".",0*/

uchar_code UintCode16x32[][64]= {				//单位加粗字符16x32："ug/m3"、"mg/m3" 、"℃"、"%"
{0x08,0x0F,0x00,0x00,0x00,0x08,0x0F,0x00,0x00,0x06,0x09,0x09,0x09,0x0E,0x08,0x00,
0x01,0xC1,0x21,0x21,0x21,0x41,0xE1,0x21,0x01,0xB1,0x49,0x49,0x49,0x49,0x31,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x30,0x40,0x44,0x44,0x4A,0x31,0x00,
0x04,0xFC,0x04,0x00,0xFC,0x04,0x00,0xFC,0x00,0x60,0x10,0x10,0x10,0x20,0xC0,0x00}, /*"ug/m3",2*/

{0x08,0x0F,0x08,0x08,0x0F,0x08,0x08,0x07,0x00,0x06,0x09,0x09,0x09,0x0E,0x08,0x00,
0x21,0xE1,0x21,0x01,0xE1,0x21,0x01,0xE1,0x01,0xB1,0x49,0x49,0x49,0x49,0x31,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x30,0x40,0x44,0x44,0x4A,0x31,0x00,
0x04,0xFC,0x04,0x00,0xFC,0x04,0x00,0xFC,0x00,0x60,0x10,0x10,0x10,0x20,0xC0,0x00}, /*"mg/m3",3*/

{0x00,0x03,0x04,0x04,0x03,0x00,0x01,0x03,0x06,0x04,0x04,0x02,0x01,0x01,0x00,0x00,
0x00,0x80,0x40,0x40,0x80,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x80,0xFC,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x03,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x60,0x30,0x30,0x30,0x60,0xC0,0x00,0x00,0x00}, /*"℃",0*/

{0x00,0x01,0x03,0x02,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x00,0x00,0x00,
0xFE,0xFF,0x01,0x00,0x01,0xFF,0xFE,0x00,0x03,0x0C,0x71,0xC1,0x01,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0x81,0x07,0x18,0xE0,0xBF,0xFF,0x80,0x00,0x80,0xFF,0x3F,0x00,
0x00,0x00,0x00,0x60,0xC0,0x00,0x00,0x00,0x00,0xC0,0x60,0x20,0x60,0xC0,0x00,0x00}, /*"%",1*/
};

uchar_code ChuShiHuaCode32x32[][128]=					// 初(0) 始(1) 化(2)
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x3C,0x1E,0x0E,0x01,0x01,0x00,0x02,0x02,
0x02,0x02,0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x03,0x07,0x07,0x02,0x00,
0x00,0x00,0x80,0x80,0x80,0x80,0x81,0x87,0x8F,0xBF,0xF8,0xF0,0xC3,0x8F,0x0E,0x04,
0x00,0x00,0x0F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x08,0x18,0x30,0x60,0xE0,0xC0,0x80,0xFF,0xFF,0x40,0xE0,0xF0,0x38,0x38,0x08,
0x03,0x1F,0xFF,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x00,0x04,0x0C,0x18,0x38,0xF0,
0xE0,0x80,0x00,0x00,0x10,0x18,0x08,0x0C,0x0E,0x1E,0xFC,0xF8,0xE0,0x00,0x00,0x00,/*"初",0*/

0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x3F,0x3F,0x1C,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x0F,0x3F,0x3C,0x18,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x20,0x20,0x21,0x3F,0xFF,0xFC,0xE0,0x20,0x20,0x3F,0x7F,0x7E,0x60,0x0E,
0x1E,0x7E,0xE6,0xC4,0x04,0x04,0x04,0x04,0x84,0xC4,0xE4,0x7C,0x3E,0x1E,0x0E,0x00,
0x00,0x00,0x00,0x18,0xF8,0xFC,0x84,0x06,0x03,0x0F,0xFF,0xFD,0xE1,0x00,0x00,0x00,
0x7F,0x7F,0x3F,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x3F,0x7F,0x7F,0x20,0x00,0x00,
0x00,0x00,0x02,0x06,0x0C,0x18,0x38,0xF0,0xE0,0x80,0x80,0xC0,0xE0,0xE0,0x60,0x00,
0xFE,0xFE,0xFC,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xFC,0xFC,0xFC,0x00,0x00,0x00,/*"始",1*/

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x3F,0x3F,0x18,0x10,0x00,0x00,0x00,
0x00,0x3F,0x3F,0x1F,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x0F,0x3E,0xFF,0xFF,0xDF,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0x01,0x07,0x0F,0x1E,0x3C,0xF8,0xF0,0x60,0x00,0x00,0x00,0x00,
0x00,0x20,0x60,0xC0,0x80,0x00,0x00,0xFF,0xFF,0xFF,0x02,0x02,0x06,0x0C,0x0C,0x18,
0x30,0xFF,0xFF,0xFF,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF0,0xF8,0xFC,0x1C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x1C,0xFC,0xF8,0x38,0x10,/*"化",2*/

};

uchar_code NumCode10x32[][40]=	       //数字粗体10x32："0123456789" 
{
0x00,0x00,0x00,0x01,0x03,0x02,0x03,0x01,0x00,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x00,
0x00,0xE0,0xFF,0x1F,0x00,0xFE,0xFF,0x01,0x00,0x00,0x00,0x03,0xFF,0xFC,0x00,0x00,
0x80,0xC0,0x60,0x20,0x60,0xC0,0x80,0x00,/*"0",0*/

0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x20,0x20,0xE0,0xE0,0x20,0x20,0x00,0x00,/*"1",1*/

0x00,0x00,0x01,0x03,0x02,0x02,0x03,0x03,0x01,0x00,0x00,0xF8,0xF8,0x00,0x00,0x00,
0x00,0x83,0xFF,0x7C,0x00,0x00,0x03,0x07,0x1C,0x38,0xE0,0xC0,0x07,0x07,0x00,0xE0,
0xE0,0x60,0x60,0x60,0x60,0x60,0xE0,0xE0,/*"2",2*/

0x00,0x01,0x01,0x03,0x02,0x02,0x03,0x01,0x00,0x00,0x00,0xF0,0xF0,0x00,0x01,0x01,
0x83,0xFE,0xFC,0x00,0x00,0x07,0x07,0x00,0x00,0x00,0x80,0xC0,0xFF,0x3F,0x00,0xC0,
0xE0,0x20,0x20,0x20,0x60,0xE0,0xC0,0x00,/*"3",3*/

0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x0F,0x3E,0xF0,
0xFF,0xFF,0x00,0x00,0x00,0x78,0xF8,0x88,0x08,0x08,0xFF,0xFF,0x08,0x08,0x00,0x00,
0x00,0x00,0x10,0x10,0xF0,0xF0,0x30,0x10,/*"4",4*/

0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0xFF,0xFF,0x06,0x04,
0x04,0x07,0x03,0x00,0x00,0x07,0x87,0x80,0x00,0x00,0x00,0x01,0xFF,0xFF,0x00,0xC0,
0xE0,0x20,0x20,0x20,0x60,0xE0,0xC0,0x00,/*"5",5*/

0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x03,0x01,0x00,0x0F,0x7F,0xF1,0x83,0x02,
0x02,0x03,0xC1,0xC0,0x00,0xFE,0xFF,0x81,0x00,0x00,0x00,0x80,0xFF,0x7F,0x00,0x00,
0x80,0xC0,0x60,0x20,0x20,0xE0,0xC0,0x00,/*"6",6*/

0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0xE0,0xE0,0x00,0x03,0x0F,
0x3C,0xF0,0xC0,0x00,0x00,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,/*"7",7*/

0x00,0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,0xF8,0xFE,0x87,0x03,0x01,
0x03,0x87,0xFE,0xF8,0x00,0x1F,0x7F,0xE0,0x80,0x80,0xC0,0xF0,0x7F,0x1F,0x00,0x00,
0xC0,0xE0,0x60,0x20,0x20,0xE0,0xC0,0x00,/*"8",8*/

0x00,0x00,0x01,0x03,0x03,0x02,0x03,0x01,0x00,0x00,0x00,0x7F,0xFF,0x80,0x00,0x00,
0x00,0xC1,0xFF,0x3F,0x00,0x01,0xC1,0xE0,0x20,0x20,0x60,0xC7,0xFF,0xF8,0x00,0xC0,
0xE0,0x20,0x20,0x60,0xC0,0xC0,0x00,0x00,/*"9",9*/
};

uchar_code TimeSeparationCode2x32[][8]=	       //时间分隔符2x32："-" (0),":"(1)
{
0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,/*"-",0*/
0x00,0x00,0x0E,0x0E,0x03,0x03,0x80,0x80,/*":",1*/
};


#endif
