/*
 * LCD_config.h
 *
 *  Created on: Jun 10, 2023
 *      Author: Ahmed El-Gaafrawy
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

			//EIGHT_BIT_MODE , FOUR_BIT_MODE
#define LCD_MODE			FOUR_BIT_MODE

#define RS_GROUP				DIO_GROUP_B
#define RS_PIN				DIO_PIN_1

#define RW_GROUP				DIO_GROUP_B
#define RW_PIN				DIO_PIN_2

#define EN_GROUP				DIO_GROUP_B
#define EN_PIN				DIO_PIN_3



#define D7_GROUP				DIO_GROUP_A
#define D7_PIN				DIO_PIN_7

#define D6_GROUP				DIO_GROUP_A
#define D6_PIN				DIO_PIN_6

#define D5_GROUP				DIO_GROUP_A
#define D5_PIN				DIO_PIN_5

#define D4_GROUP				DIO_GROUP_A
#define D4_PIN				DIO_PIN_4

#define D3_GROUP				DIO_GROUP_A
#define D3_PIN				DIO_PIN_3

#define D2_GROUP				DIO_GROUP_A
#define D2_PIN				DIO_PIN_2

#define D1_GROUP				DIO_GROUP_A
#define D1_PIN				DIO_PIN_1

#define D0_GROUP				DIO_GROUP_A
#define D0_PIN				DIO_PIN_0

#endif /* LCD_CONFIG_H_ */
