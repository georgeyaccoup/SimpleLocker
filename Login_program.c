/*
 * Login_program.c
 *
 *  Created on: 13 Jul 2023
 *      Author: george yaccoup
 */

#ifndef LOGIN_PROGRAM_C_
#define LOGIN_PROGRAM_C_
#include "Login_conige.h"
#include "../keybade/Pass_confeg.h"
#include "../keybade/Pass_int.h"
#include "../LCD/LCD_config.h"
#include "../LCD/LCD_int.h"
#include "../DIO/DIO_config.h"
#include "../DIO/DIO_int.h"
#include <util/delay.h>
static char Login_SCEnterdPass[6] = { 0 };
static u8 Login_Su8ComperFlage = 3;

void Login_voidInit(void)
 {
	LCD_enuInit();
	Keypad_voidint();
 }

void Login_voidWelcome(void) {
	LCD_voidSendCommand(0x01);
	LCD_voidSendCommand(0x84);
	LCD_voidWriteString("Hello");
	_delay_ms(2000);
}
void Login_voidEnterPassword(void) {
	u8 Local_u8KeyPressed = 0;
	s8 Local_s8Counter = 0;
	LCD_voidSendCommand(0x01);
	LCD_voidSendCommand(0x80);
	LCD_voidWriteString("Enter Password :");
	LCD_voidSendCommand(0xC0);
	for (u8 i = 0; i < 6; i++)
		Login_SCEnterdPass[i] = 0;
	while (( Local_u8KeyPressed != '=')&&(Local_s8Counter < 6)) {
		Local_u8KeyPressed = Keypad_u8GetPressedKey();
		if ((Local_u8KeyPressed != KEYPAD_NOT_PRESSED) && (Local_u8KeyPressed != '=')) {
			Login_SCEnterdPass[Local_s8Counter] = Local_u8KeyPressed;
			Local_s8Counter++;
			LCD_voidWriteString("-");

		}
	}
		
}
void Login_voidCheckPassword(void) {
	char* Local_PCLCDPass = PASSWORD;
	for (u8 i = 0; i < 6; i++) {
		if (Login_SCEnterdPass[i] == Local_PCLCDPass[i]) {
			Login_Su8ComperFlage = 1;
			break;
		}
		else {
			Login_Su8ComperFlage = 0;
		}
	}
	if (Login_Su8ComperFlage == 0) {
		LCD_voidSendCommand(0x01);
		LCD_voidSendCommand(0x80);
		LCD_voidWriteString("correct");
		_delay_ms(1500);
	}else{
		LCD_voidSendCommand(0x01);
		LCD_voidSendCommand(0x80);
		LCD_voidWriteString("incorrect");
		LCD_voidSendCommand(0xC0);
		LCD_voidWriteString("try Again");
		_delay_ms(2000);
	}

}
u8 Login_u8GetCompareFlag(void) {
	return Login_Su8ComperFlage;
}

#endif /* LOGIN_PROGRAM_C_ */
