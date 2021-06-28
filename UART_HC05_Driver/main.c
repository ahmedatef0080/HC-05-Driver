/*
 * UART_HC05_Driver.c
 *
 * Created: 10/5/2020 7:36:34 PM
 * Author : Ahmed Atef
 */ 

#include "UART.h"

#include "LED.h"




int main(void)
{
	uint8 data ; 
	
	LED0_Init();
	UART_Init();
	
	
	
	
    /* Replace with your application code */
    while (1) 
    {
		data = UART_Recive_Byte();
		
		if(data == '1')
		{
			LED0_ON();
		}
		else if(data== '2')
		{
			LED0_OFF();
		}
		else if(data == '3')
		{
			LED0_Toggle();
		}
		
    }
}

