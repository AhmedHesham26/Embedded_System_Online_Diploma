/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <stdint.h>

#define BASE_RCC 0x40021000
#define BASE_GPIOA 0x40010800

#define RCC_APB2ENR *(volatile uint32_t *)(BASE_RCC+0x18)
#define GPIOA_CRH *(volatile uint32_t *)(BASE_GPIOA+0x04)
#define GPIOA_ODR *(volatile uint32_t *)(BASE_GPIOA+0x0C)

int main(void)
{
	int i;
	/*APB2_ENR REGISTER set 1 in bit 2 */
	RCC_APB2ENR|=1<<2;

/* CRH REGISTER in pin13 set 2 and clear the rest bits */
	GPIOA_CRH &=0xFF0FFFFF; //set zeroes from bit 20 to 23
	GPIOA_CRH |=0x00200000; //then convert them to 0010

/* ODR REGISTER now to the toddle step on pin 13*/
	while(1)
	{
		GPIOA_ODR |=1<<13;
		for(i=0;i<5000;i++); //for delay
		GPIOA_ODR &=~(1<<13); //clear bit 13
		for(i=0;i<5000;i++); //for delay
	}


	return 0;
}
