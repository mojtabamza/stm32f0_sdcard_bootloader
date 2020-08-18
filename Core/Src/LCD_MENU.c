#include "LCD_MENU.h"


void startup(void) {
	LCD_Init();
	HAL_Delay(200);
	LCD_Clear();
	LCD_Puts(8, 0, (char*)"SAA");
	LCD_Puts(0, 2, (char*)"check for update ...");
	HAL_Delay(3000);
	LCD_Clear();
}

