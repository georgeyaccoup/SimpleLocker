/*
 * main.c
 *
 *  Created on: 13 Jul 2023
 *      Author: george yaccoup
 */
#include "keybade/Pass_confeg.h"
#include "keybade/Pass_int.h"

#include "DIO/DIO_config.h"
#include "DIO/DIO_int.h"

#include "LCD/LCD_config.h"
#include "LCD/LCD_int.h"

#include "Login/Login_conige.h"
#include "Login/Login_int.h"
int main() {
	Login_voidInit();
	Login_voidWelcome();
	while (Login_u8GetCompareFlag != 0) {
		Login_voidEnterPassword();
		Login_voidCheckPassword();
	}

}