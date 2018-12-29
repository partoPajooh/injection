/*
 * 74HC138.h
 *
 *  Created on: ? ÂÈÇä ???? åž.Ô.
 *      Author: pr
 */

#ifndef DIGITALINPUT_H_
#define DIGITALINPUT_H_
#include "stm32f1xx_hal.h"

#define IN_PORT							GPIOC
#define IN1_PIN							GPIO_PIN_8
#define IN2_PIN							GPIO_PIN_7
#define IN3_PIN							GPIO_PIN_6

#define DB1								GPIOA,GPIO_PIN_0
#define DB2								GPIOC,GPIO_PIN_3
#define DB3								GPIOC,GPIO_PIN_2
#define DB4								GPIOC,GPIO_PIN_1
#define DB5								GPIOC,GPIO_PIN_0
#define DB6								GPIOC,GPIO_PIN_15
#define DB7								GPIOC,GPIO_PIN_14
#define DB8								GPIOC,GPIO_PIN_13



#define HIGH							GPIO_PIN_SET
#define LOW								GPIO_PIN_RESET

#define digitalWrite3(PORT,PIN,VALUE)	HAL_GPIO_WritePin(PORT,PIN,VALUE)
#define digitalRead(PORT)				HAL_GPIO_ReadPin(PORT)

void Init_HC138(void);
static void setOut(uint8_t outPutnumber);
void SetLow(uint8_t outPutnumber);
void SetHigh(uint8_t outPutnumber);
//void setOut(uint8_t outPutnumber);

uint8_t readOne541(uint8_t num);
double readDigitalInput(void);

#endif /* 74DIGITALINPUT_H_ */
