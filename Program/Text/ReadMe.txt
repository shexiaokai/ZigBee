ZigBee��Ŀ����

����Ŀʹ������Ƽ�С�Ϳ�����

MCU��CC2530F256

����������IAR FOR 8051 V10.10

�������ã�
1.����General Options:Options>General Options>Target
	Decice:CC2531F256
	Code Model:Near
	Data Model:Large
	Calling Convention:PDATA
2.����Linker:Linker>Config>
	Override defalut:lnk51ew_cc2530F256.xcl
3.����Dubgger:Dubgger>Setup
	Decice:Texas Instruments
	Override defalut:ioCC2530F256.ddf
3.����ͷ�ļ�:C/C++ compiler>Preprocessor д�� $PROJ_DIR$\Header��$PROJ_DIR$��ʾ��ǰ�ļ����£�
4.����UserKeyWord:Tools>Options>SetUpFile



