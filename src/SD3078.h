#ifndef SD3078_H
#define SD3078_H

#include "Arduino.h"
# default ADDr  b0110010  //0x32

class SD3078
{
	public:
		void begin();
		void set
		void id(byte *IDs);  //读取用户ID
		void setRAM(byte addr,byte Data);    //写SRAM存储区 0x00~0x45（0-69）
 		byte readRAM(byte addr);             //读SRAM存储器 0x00~0x45（0-69）
	private:
}

#endif