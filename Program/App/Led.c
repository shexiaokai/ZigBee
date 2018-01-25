/**
  **********************************  CC2530  **********************************
  * @文件名     ： Led.c
  * @作者       ： 佘晓凯
  * @文件版本   ： V1.0.0
  * @日期       ： 2018年01月25日
  * @摘要       ： LED显示程序
  ******************************************************************************/
/*----------------------------------------------------------------------------
  更新日志:
  2018-01-25 V1.0.0:初始版本
  ----------------------------------------------------------------------------*/




/* 包含的头文件 --------------------------------------------------------------*/
#include "Led.h"

/************************************************
函数名称 ： LedInit
功    能 ： LED——IO口初始化
参    数 ： 无
返 回 值 ： 无
作    者 ： 佘晓凯
摘    要 ： LED1:P1_0	LED2:P1_1	LED3:P1_4
			P1_0,P1_1可输出20mA电流，其余均只有4mA
*************************************************/
void LedInit(void)
{
  	P1DIR |= 0x13;		//设置P1的0，1，4口为输出模式
	LED1=0;				//熄灭三个灯；
	LED2=0;
	LED3=0;
}

