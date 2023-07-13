/*
 * Pass_confeg.h
 *
 *  Created on: 13 Jul 2023
 *      Author: george yaccoup
 */

#ifndef PASS_CONFEG_H_
#define PASS_CONFEG_H_


#include "../DIO/DIO_int.h"

 //**********VERTICAL************
#define KeyBad_PIN_A DIO_PIN_0
#define KeyBad_PIN_B DIO_PIN_1
#define KeyBad_PIN_C DIO_PIN_2
#define KeyBad_PIN_D DIO_PIN_3

#define KeyBad_GROUP_A DIO_GROUP_C
#define KeyBad_GROUP_B DIO_GROUP_C
#define KeyBad_GROUP_C DIO_GROUP_C
#define KeyBad_GROUP_D DIO_GROUP_C
//**********HORIZONTAL************
#define KeyBad_PIN_1 DIO_PIN_0
#define KeyBad_PIN_2 DIO_PIN_1
#define KeyBad_PIN_3 DIO_PIN_2
#define KeyBad_PIN_4 DIO_PIN_3

#define KeyBad_GROUP_1 DIO_GROUP_D
#define KeyBad_GROUP_2 DIO_GROUP_D
#define KeyBad_GROUP_3 DIO_GROUP_D
#define KeyBad_GROUP_4 DIO_GROUP_D

//**********KEYBORD*****************
#define KEYPAD_VALUES  {\
                        {'7','8','9','/'},\
                        {'4','5','6','x'},\
                        {'1','2','3','-'},\
                        {'C','0','=','+'},\
                       }

#endif /* PASS_CONFEG_H_ */
