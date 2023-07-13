/*
 * Login_int.h
 *
 *  Created on: 13 Jul 2023
 *      Author: george yaccoup
 */

#ifndef LOGIN_INT_H_
#define LOGIN_INT_H_

#include "../stdTypes.h"

void Login_voidInit(void);
void Login_voidWelcome(void);
void Login_voidEnterPassword(void);
void Login_voidCheckPassword(void);
u8 Login_u8GetCompareFlag(void);
#endif /* LOGIN_INT_H_ */
