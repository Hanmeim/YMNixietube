#ifndef YoungMaker7SegmentDisplay_H
#define YoungMaker7SegmentDisplay_H 

#include "YoungMakerPort.h"
//************definitions for TM1637*********************
#define ADDR_AUTO 0x40
#define ADDR_FIXED 0x44
#define STARTADDR 0xc0
/**** definitions for the clock point of the digit tube *******/
#define POINT_ON 1
#define POINT_OFF 0
/**************definitions for brightness***********************/
#define BRIGHT_DARKEST 0
#define BRIGHT_TYPICAL 2
#define BRIGHTEST 7
///@brief Class for numeric display module
//extern unsigned long _distime; 					//2018.12.18移除此处两变量，解决变量重定义问题 许
//extern float _disvalue;							//2018.12.18移除此处两变量，解决变量重定义问题 许
class YoungMaker7SegmentDisplay:public YoungMakerPort
{
	public:
		YoungMaker7SegmentDisplay();
		YoungMaker7SegmentDisplay(uint8_t port);
    unsigned long _distime; 							//2018.12.18变量移动至此处
    float _disvalue;									//2018.12.18变量移动至此处
                void reset(uint8_t port);
                void redisplay(float value);
				
				void display(float value);
                void display(double value);
				void display(char value);
                void display(int value);
				void display(uint8_t value);
				void display(uint16_t value);
				void display(uint32_t value);
				void display(short value);
				void display(long int value);
				
                void display(int8_t DispData[]);
		void clearDisplay(void);
	private:
                int pows(int a,int b);
		int checkNum(float v,int b);
		uint8_t DIO;
		uint8_t SCLK;
                uint8_t RCLK;
}; 
#endif
