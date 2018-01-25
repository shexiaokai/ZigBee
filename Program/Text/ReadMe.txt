ZigBee项目程序

本项目使用网蜂科技小型开发板

MCU：CC2530F256

开发环境：IAR FOR 8051 V10.10

环境设置：
1.设置General Options:Options>General Options>Target
	Decice:CC2531F256
	Code Model:Near
	Data Model:Large
	Calling Convention:PDATA
2.设置Linker:Linker>Config>
	Override defalut:lnk51ew_cc2530F256.xcl
3.设置Dubgger:Dubgger>Setup
	Decice:Texas Instruments
	Override defalut:ioCC2530F256.ddf
3.设置头文件:C/C++ compiler>Preprocessor 写入 $PROJ_DIR$\Header（$PROJ_DIR$表示当前文件夹下）
4.设置UserKeyWord:Tools>Options>SetUpFile



