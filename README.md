*To boot the STM32F0 microcontrollers by .bin(update file)  into it.
*The program detects a new version of the software (if the update file would be into sd card) and write the file in flash.
*the software benefits FATFS features so it is important to consider the microcontroller's SRAM memory.
*it is recommended to select a microcontroller which has up to 128 KB flash and up to 8 KB SRAM memory.
*in this project I use stm32f030cc (256 kB flash and 32 KB ram)
some prominent features :
*HAL functions
*SD connection based on spi protocol
