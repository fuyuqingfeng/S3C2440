/**************************************************************
The initial and control for TFT LCD
**************************************************************/

#define LCDW35			1		// 东华屏(320X240)
#define LCDS35			2		// 三星屏(320X240)
#define LCDT35			3		// 东芝屏(240X320)
#define LCD43			4		// 东华4.3寸屏
#define LCD57			5		// 5.7寸屏
#define LCD70			6		// 7.0寸屏
#define VGA			7		//VGA
#define LCD104			8		//10.4寸屏

#define LCD_Type		LCDW35		//设定屏的类型

#if(LCD_Type == LCDW35)				// 东华屏

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(320)	
#define LCD_YSIZE_TFT 	(240)

//Timing parameter for 3.5' LCD
#define VBPD 		(12)			//垂直同步信号的后肩
#define VFPD 		(4)			//垂直同步信号的前肩
#define VSPW 		(5)			//垂直同步信号的脉宽

#define HBPD 		(22)			//水平同步信号的后肩
#define HFPD 		(33)			//水平同步信号的前肩
#define HSPW 		(44)			//水平同步信号的脉宽

#define CLKVAL_TFT 	(6) 	

#elif(LCD_Type == LCDS35)			// 三星屏

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(320)	
#define LCD_YSIZE_TFT 	(240)

//Timing parameter for 3.5' LCD
#define VBPD 		(12)			//垂直同步信号的后肩
#define VFPD 		(4)			//垂直同步信号的前肩
#define VSPW 		(5)			//垂直同步信号的脉宽

#define HBPD 		(8)			//水平同步信号的后肩
#define HFPD 		(16)			//水平同步信号的前肩
#define HSPW 		(4)			//水平同步信号的脉宽

#elif(LCD_Type == LCDT35)			// 东芝屏

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(240)	
#define LCD_YSIZE_TFT 	(320)

//Timing parameter for 3.5' LCD
#define VBPD 		(1)			//垂直同步信号的后肩
#define VFPD 		(2)			//垂直同步信号的前肩
#define VSPW 		(6)			//垂直同步信号的脉宽

#define HBPD 		(5)			//水平同步信号的后肩
#define HFPD 		(10)			//水平同步信号的前肩
#define HSPW 		(15)			//水平同步信号的脉宽

#define CLKVAL_TFT 	(4) 	

#elif(LCD_Type == LCD43)			// 4.3寸屏

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(480)	
#define LCD_YSIZE_TFT 	(272)

//Timing parameter for 4.3' LCD
#define VBPD 		(2)			//垂直同步信号的后肩
#define VFPD 		(2)			//垂直同步信号的前肩
#define VSPW 		(4)			//垂直同步信号的脉宽

#define HBPD 		(2)			//水平同步信号的后肩
#define HFPD 		(40)			//水平同步信号的前肩
#define HSPW 		(41)			//水平同步信号的脉宽

#define CLKVAL_TFT 	(4) 	

#elif(LCD_Type == LCD57)			// 5.7寸屏

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(320)	
#define LCD_YSIZE_TFT 	(240)

//Timing parameter for 5.7' LCD
#define VBPD 		(3)			//垂直同步信号的后肩
#define VFPD 		(5)			//垂直同步信号的前肩
#define VSPW 		(15)			//垂直同步信号的脉宽

#define HBPD 		(5)			//水平同步信号的后肩
#define HFPD 		(15)			//水平同步信号的前肩
#define HSPW 		(8)			//水平同步信号的脉宽

#define CLKVAL_TFT 	(7) 	

#elif(LCD_Type == VGA)				// VGA

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(640)	
#define LCD_YSIZE_TFT 	(480)

//Timing parameter for VGA
#define VBPD 		(29)			//垂直同步信号的后肩
#define VFPD 		(5)			//垂直同步信号的前肩
#define VSPW 		(4)			//垂直同步信号的脉宽

#define HBPD 		(71)			//水平同步信号的后肩
#define HFPD 		(40)			//水平同步信号的前肩
#define HSPW 		(31)			//水平同步信号的脉宽

#define CLKVAL_TFT 	(1) 	

#elif(LCD_Type == LCD70)			// 7.0寸屏

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(800)	
#define LCD_YSIZE_TFT 	(480)

//Timing parameter for 7.0' LCD
#define VBPD 		(3)			//垂直同步信号的后肩
#define VFPD 		(5)			//垂直同步信号的前肩
#define VSPW 		(15)			//垂直同步信号的脉宽

#define HBPD 		(5)			//水平同步信号的后肩
#define HFPD 		(15)			//水平同步信号的前肩
#define HSPW 		(8)			//水平同步信号的脉宽

#define CLKVAL_TFT 	(7) 	

#elif(LCD_Type == LCD104)			// 10.4寸屏

#define MVAL		(13)
#define MVAL_USED 	(0)			//0=each frame   1=rate by MVAL
#define INVVDEN		(1)			//0=normal       1=inverted
#define BSWP		(0)			//Byte swap control
#define HWSWP		(1)			//Half word swap control
#define PNRMODE		(3)			// 设置为TFT屏
#define BPPMODE		(12)			// 设置为16bpp模式

//TFT_SIZE
#define LCD_XSIZE_TFT 	(800)	
#define LCD_YSIZE_TFT 	(600)

//Timing parameter for 10.4' LCD
#define VBPD 		(5)			//垂直同步信号的后肩
#define VFPD 		(6)			//垂直同步信号的前肩
#define VSPW 		(1)			//垂直同步信号的脉宽

#define HBPD 		(28)			//水平同步信号的后肩
#define HFPD 		(14)			//水平同步信号的前肩
#define HSPW 		(180)			//水平同步信号的脉宽

#define CLKVAL_TFT 	(3) 	

#endif

#define SCR_XSIZE_TFT 	(LCD_XSIZE_TFT)
#define SCR_YSIZE_TFT 	(LCD_YSIZE_TFT)

#define HOZVAL_TFT	(LCD_XSIZE_TFT-1)
#define LINEVAL_TFT	(LCD_YSIZE_TFT-1)

#define LCDFRAMEBUFFER		0x33E00000			//LCD显存的起始地址， 


void LCD_TFT_Init(void);

void LCD_Display(void);



