/*
 * LCD_int.h
 *
 *  Created on: Jun 10, 2023
 *      Author: Ahmed El-Gaafrawy
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_
#include "../stdTypes.h"
void LCD_enuInit(void);

void LCD_voidSendData(u8 Copy_u8Data);

void LCD_voidSendCommand(u8 Copy_u8Command);

void LCD_voidWriteString(const char * Copy_pcString);

void LCD_voidWriteIntegarNum(s32 Copy_s32Num);

void LCD_voidWriteFloatNum(f32 Copy_f32Num);

#endif /* LCD_INT_H_ */
