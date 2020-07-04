#include "LCD_MENU.h"


void startup(void) {
	LCD_Init();
	HAL_Delay(200);
	LCD_Clear();
	LCD_Puts(8, 0, (char*)"SAA");
	HAL_Delay(2000);
	LCD_Clear();
}

