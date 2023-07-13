/*
 * Pass_program.c
 *
 *  Created on: 13 Jul 2023
 *      Author: george yaccoup
 */

#include"Pass_confeg.h"
#include"Pass_int.h"
#include "Pass_private.h"
#include "../DIO/DIO_int.h"
#include "../DIO/DIO_config.h"
#include <util/delay.h>
void Keypad_voidint() {
	DIO_voidSetPinDirection(KeyBad_GROUP_A, KeyBad_PIN_A, DIO_INPUT);
	DIO_voidSetPinDirection(KeyBad_GROUP_B, KeyBad_PIN_B, DIO_INPUT);
	DIO_voidSetPinDirection(KeyBad_GROUP_C, KeyBad_PIN_C, DIO_INPUT);
	DIO_voidSetPinDirection(KeyBad_GROUP_D, KeyBad_PIN_D, DIO_INPUT);

	DIO_voidSetPinDirection(KeyBad_GROUP_1, KeyBad_PIN_1, DIO_OUTPUT);
	DIO_voidSetPinDirection(KeyBad_GROUP_2, KeyBad_PIN_2, DIO_OUTPUT);
	DIO_voidSetPinDirection(KeyBad_GROUP_3, KeyBad_PIN_3, DIO_OUTPUT);
	DIO_voidSetPinDirection(KeyBad_GROUP_4, KeyBad_PIN_4, DIO_OUTPUT);


	DIO_voidSetPinValue(KeyBad_GROUP_A, KeyBad_PIN_A,DIO_PULL_UP);
	DIO_voidSetPinValue(KeyBad_GROUP_B, KeyBad_PIN_B,DIO_PULL_UP);
	DIO_voidSetPinValue(KeyBad_GROUP_C, KeyBad_PIN_C,DIO_PULL_UP);
	DIO_voidSetPinValue(KeyBad_GROUP_D, KeyBad_PIN_D,DIO_PULL_UP);

	DIO_voidSetPinValue(KeyBad_GROUP_1, KeyBad_PIN_1, DIO_HIGH);
	DIO_voidSetPinValue(KeyBad_GROUP_2, KeyBad_PIN_2, DIO_HIGH);
	DIO_voidSetPinValue(KeyBad_GROUP_3, KeyBad_PIN_3, DIO_HIGH);
	DIO_voidSetPinValue(KeyBad_GROUP_4, KeyBad_PIN_4, DIO_HIGH);
}
/*
u8 Keypad_u8GetPressedKey() {
	u8 Local_u8KeypadValue = KEYPAD_NOT_PRESSED;
	u8 Local_u8ColGRP[4] = { KeyBad_GROUP_1,KeyBad_GROUP_2,KeyBad_GROUP_3,KeyBad_GROUP_4 };
	u8 Local_u8ColPin[4] = { KeyBad_PIN_1,KeyBad_PIN_2,KeyBad_PIN_3,KeyBad_PIN_4 };
	u8 Local_u8RowGRP[4] = { KeyBad_GROUP_A,KeyBad_GROUP_B,KeyBad_GROUP_C,KeyBad_GROUP_D };
	u8 Local_u8RowPIN[4] = { KeyBad_PIN_A,KeyBad_PIN_B ,KeyBad_PIN_C ,KeyBad_PIN_D };
	u8 Local_u8RowValue ;
	for (u8 Local_u8kayscol = 0; Local_u8kayscol < 4; Local_u8kayscol++) {
		DIO_voidSetPinValue(Local_u8ColGRP[Local_u8kayscol], Local_u8ColPin[Local_u8kayscol], DIO_LOW);
		for (u8 Local_u8kaysRow = 0; Local_u8kaysRow < 4; Local_u8kaysRow++) {
			Local_u8RowValue = DIO_u8GetPinValue(Local_u8RowGRP[Local_u8kaysRow], Local_u8RowPIN[Local_u8kaysRow]);
			if (Local_u8RowValue == 0) {
				_delay_ms(3);
				Local_u8RowValue = DIO_u8GetPinValue(Local_u8RowGRP[Local_u8kaysRow], Local_u8RowPIN[Local_u8kaysRow]);
				if (Local_u8RowValue==0) {
					u8 LocalKeyValue[4][4] = KEYPAD_VALUES;
					Local_u8KeypadValue = LocalKeyValue[Local_u8kaysRow][Local_u8kaysRow];
					while (Local_u8KeypadValue == DIO_u8GetPinValue(Local_u8RowGRP[Local_u8kaysRow], Local_u8RowPIN[Local_u8kaysRow]));
				}
			}
		}
		DIO_voidSetPinValue(Local_u8ColGRP[Local_u8kayscol], Local_u8ColPin[Local_u8kayscol], DIO_HIGH);
	}
	return Local_u8KeypadValue;

}*/
u8 Keypad_u8GetPressedKey(void)
{
	u8 Local_u8KeyValue = KEYPAD_NOT_PRESSED;
	u8 Local_au8RowGrp[4] = { KeyBad_GROUP_1,KeyBad_GROUP_2,KeyBad_GROUP_3,KeyBad_GROUP_4 };
	u8 Local_au8RowPin[4] = { KeyBad_PIN_1,KeyBad_PIN_2,KeyBad_PIN_3,KeyBad_PIN_4 };
	u8 Local_au8ColGrp[4] = { KeyBad_GROUP_A,KeyBad_GROUP_B,KeyBad_GROUP_C,KeyBad_GROUP_D };
	u8 Local_au8ColPin[4] = { KeyBad_PIN_A,KeyBad_PIN_B ,KeyBad_PIN_C ,KeyBad_PIN_D };

	u8 Local_u8ColIter, Local_u8RowIter, Local_u8RowValue;

	for (Local_u8ColIter = 0; Local_u8ColIter < 4; Local_u8ColIter++)
	{
		DIO_voidSetPinValue(Local_au8ColGrp[Local_u8ColIter], Local_au8ColPin[Local_u8ColIter], DIO_LOW);

		for (Local_u8RowIter = 0; Local_u8RowIter < 4; Local_u8RowIter++)
		{
			Local_u8RowValue = DIO_u8GetPinValue(Local_au8RowGrp[Local_u8RowIter], Local_au8RowPin[Local_u8RowIter]);
			if (Local_u8RowValue == 0)
			{
				_delay_ms(3);
				Local_u8RowValue = DIO_u8GetPinValue(Local_au8RowGrp[Local_u8RowIter], Local_au8RowPin[Local_u8RowIter]);
				if (Local_u8RowValue == 0)
				{
					u8 Local_au8KeysValue[4][4] = KEYPAD_VALUES;
					Local_u8KeyValue = Local_au8KeysValue[Local_u8RowIter][Local_u8ColIter];
					while (Local_u8RowValue == DIO_u8GetPinValue(Local_au8RowGrp[Local_u8RowIter], Local_au8RowPin[Local_u8RowIter]));
				}

			}
		}

		DIO_voidSetPinValue(Local_au8ColGrp[Local_u8ColIter], Local_au8ColPin[Local_u8ColIter], DIO_HIGH);
	}
	return Local_u8KeyValue;
}
