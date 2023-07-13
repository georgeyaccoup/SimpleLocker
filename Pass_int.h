/*
 * Pass_int.h
 *
 *  Created on: 13 Jul 2023
 *      Author: george yaccoup
 */

#ifndef PASS_INT_H_
#define PASS_INT_H_
#include "../DIO/DIO_int.h"
#include "../stdTypes.h"
void Keypad_voidint();
u8 Keypad_u8GetPressedKey();
#define KEYPAD_NOT_PRESSED     0xff
#endif /* PASS_INT_H_ */
