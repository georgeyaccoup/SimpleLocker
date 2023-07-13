/*
 * DIO_int.h
 *
 *  Created on: Jun 9, 2023
 *      Author: Ahmed El-Gaafrawy
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_
#include "../stdTypes.h"
void DIO_voidSetPinDirection(u8 Copy_u8GroupID, u8 Copy_u8PinID, u8 Copy_u8Direction);

void DIO_voidSetPinValue(u8 Copy_u8GroupID, u8 Copy_u8PinID, u8 Copy_u8Value);

void DIO_voidTogglePinValue(u8 Copy_u8GroupID, u8 Copy_u8PinID);

u8 DIO_u8GetPinValue(u8 Copy_u8GroupID, u8 Copy_u8PinID);

#define DIO_GROUP_A             0
#define DIO_GROUP_B             1
#define DIO_GROUP_C             2
#define DIO_GROUP_D             3

#define DIO_PIN_0               0
#define DIO_PIN_1               1
#define DIO_PIN_2               2
#define DIO_PIN_3               3
#define DIO_PIN_4               4
#define DIO_PIN_5               5
#define DIO_PIN_6               6
#define DIO_PIN_7               7

#define DIO_INPUT               0
#define DIO_OUTPUT              1

#define DIO_LOW                 0
#define DIO_HIGH                1

#define DIO_FLOAT               0
#define DIO_PULL_UP             1
#endif /* DIO_INT_H_ */
