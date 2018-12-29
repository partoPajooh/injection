#include <digitalInput.h>


void Init_HC138(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOC_CLK_ENABLE();
	/*Configure GPIO pins : SCLK_PIN */
	GPIO_InitStruct.Pin = IN1_PIN | IN2_PIN | IN3_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(IN_PORT, &GPIO_InitStruct);
}

void setOut(uint8_t outPutnumber)
{
	if(outPutnumber & 0x01)digitalWrite3(IN_PORT,IN1_PIN,HIGH);
	else digitalWrite3(IN_PORT,IN1_PIN,LOW);
	if(outPutnumber & 0x02)digitalWrite3(IN_PORT,IN2_PIN,HIGH);
	else digitalWrite3(IN_PORT,IN2_PIN,LOW);
	if(outPutnumber & 0x04)digitalWrite3(IN_PORT,IN3_PIN,HIGH);
	else digitalWrite3(IN_PORT,IN3_PIN,LOW);
}
void SetHigh(uint8_t outPutnumber)
{
	setOut(outPutnumber);
}

void SetLow(uint8_t outPutnumber)
{
	setOut(outPutnumber-1);
}



uint8_t readOne541(uint8_t num)
{
	setOut(num);
	return digitalRead(DB8)*1+digitalRead(DB7)*2+digitalRead(DB6)*4+digitalRead(DB5)*8+\
			digitalRead(DB4)*16+digitalRead(DB3)*32+digitalRead(DB2)*64+digitalRead(DB1)*128;
}

double readDigitalInput(void)
{
	return (readOne541(3)<<24) + (readOne541(2)<<16) + (readOne541(0)<<8) + readOne541(1);
	}
