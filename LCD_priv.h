/*
 * LCD_priv.h
 *
 *  Created on: Jun 10, 2023
 *      Author: Ahmed El-Gaafrawy
 */

#ifndef LCD_PRIV_H_
#define LCD_PRIV_H_

#define EIGHT_BIT_MODE 		87
#define FOUR_BIT_MODE		32
#include "../stdTypes.h"
static void voidWriteByteAndLatch(u8 Copy_u8Byte);
static u8 u8CountDigitsInNum(s32 Copy_s32Num);

#endif /* LCD_PRIV_H_ */

