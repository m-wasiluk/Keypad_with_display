/*
 * main.h
 *
 *  Created on: Mar 24, 2024
 *      Author: macie
 */

#ifndef MAIN_H_
#define MAIN_H_

typedef struct {
	uint32_t GPIOAEN			:1;
	uint32_t GPIOBEN			:1;
	uint32_t GPIOCEN			:1;
	uint32_t GPIODEN			:1;
	uint32_t GPIOEEN			:1;
	uint32_t const reserved_1	:2;
	uint32_t GPIOHEN			:1;
	uint32_t const reserved_2	:5;
	uint32_t ADCEN				:1;
	uint32_t const reserved_3	:4;
	uint32_t RNGEN				:1;
	uint32_t const reserved_4	:13;
} RCC_AHB2ENR_t;

typedef struct {
	uint32_t pin_0			:2;
	uint32_t pin_1			:2;
	uint32_t pin_2			:2;
	uint32_t pin_3			:2;
	uint32_t pin_4			:2;
	uint32_t pin_5			:2;
	uint32_t pin_6			:2;
	uint32_t pin_7			:2;
	uint32_t pin_8			:2;
	uint32_t pin_9			:2;
	uint32_t pin_10			:2;
	uint32_t pin_11			:2;
	uint32_t pin_12			:2;
	uint32_t pin_13			:2;
	uint32_t pin_14			:2;
	uint32_t pin_15			:2;
} GPIOx_MODER_t;

typedef struct {
	uint32_t pin_0			:2;
	uint32_t pin_1			:2;
	uint32_t pin_2			:2;
	uint32_t pin_3			:2;
	uint32_t pin_4			:2;
	uint32_t pin_5			:2;
	uint32_t pin_6			:2;
	uint32_t pin_7			:2;
	uint32_t pin_8			:2;
	uint32_t pin_9			:2;
	uint32_t pin_10			:2;
	uint32_t pin_11			:2;
	uint32_t pin_12			:2;
	uint32_t pin_13			:2;
	uint32_t pin_14			:2;
	uint32_t pin_15			:2;
} GPIOx_PUPDR_t;

typedef const struct {
	uint32_t pin_0			:1;
	uint32_t pin_1			:1;
	uint32_t pin_2			:1;
	uint32_t pin_3			:1;
	uint32_t pin_4			:1;
	uint32_t pin_5			:1;
	uint32_t pin_6			:1;
	uint32_t pin_7			:1;
	uint32_t pin_8			:1;
	uint32_t pin_9			:1;
	uint32_t pin_10			:1;
	uint32_t pin_11			:1;
	uint32_t pin_12			:1;
	uint32_t pin_13			:1;
	uint32_t pin_15			:1;
	uint32_t reserved		:16;
} GPIOx_IDR_t;

typedef struct {
	uint32_t pin_0			:1;
	uint32_t pin_1			:1;
	uint32_t pin_2			:1;
	uint32_t pin_3			:1;
	uint32_t pin_4			:1;
	uint32_t pin_5			:1;
	uint32_t pin_6			:1;
	uint32_t pin_7			:1;
	uint32_t pin_8			:1;
	uint32_t pin_9			:1;
	uint32_t pin_10			:1;
	uint32_t pin_11			:1;
	uint32_t pin_12			:1;
	uint32_t pin_13			:1;
	uint32_t pin_15			:1;
	uint32_t const reserved	:16;
} GPIOx_ODR_t;

#define ADDR_RCC_AHB2ENR 	(RCC_AHB2ENR_t*) 0x4002104C
#define ADDR_GPIOA_MODER 	(GPIOx_MODER_t*) 0x48000000
#define ADDR_GPIOA_PUPDR 	(GPIOx_PUPDR_t*) 0x4800000C
#define ADDR_GPIOA_IDR 		(GPIOx_IDR_t*)   0x48000010
#define ADDR_GPIOA_ODR   	(GPIOx_ODR_t*)   0x48000014

#define PIN_STATE_HIGH 		1
#define PIN_STATE_LOW  		0
#define PIN_MODE_OUTPUT		0b01
#define PIN_MODE_INPUT		0b00
#define PIN_PULL_UP_EN		0b01

#define ROW_1	GPIOA_ODR_ptr->pin_2
#define ROW_2	GPIOA_ODR_ptr->pin_7
#define ROW_3	GPIOA_ODR_ptr->pin_6
#define ROW_4	GPIOA_ODR_ptr->pin_5
#define COL_1	GPIOA_IDR_ptr->pin_4
#define COL_2	GPIOA_IDR_ptr->pin_3
#define COL_3	GPIOA_IDR_ptr->pin_1
#define COL_4	GPIOA_IDR_ptr->pin_0

#define ROW_1_PIN	pin_2
#define ROW_2_PIN	pin_7
#define ROW_3_PIN	pin_6
#define ROW_4_PIN	pin_5
#define COL_1_PIN	pin_4
#define COL_2_PIN	pin_3
#define COL_3_PIN	pin_1
#define COL_4_PIN	pin_0

#define DELAY	for(uint32_t i = 0; i < 50000; i++);
#define WAIT_FOR_COL_1_UNPRESS while(COL_1 == PIN_STATE_LOW);
#define WAIT_FOR_COL_2_UNPRESS while(COL_2 == PIN_STATE_LOW);
#define WAIT_FOR_COL_3_UNPRESS while(COL_3 == PIN_STATE_LOW);
#define WAIT_FOR_COL_4_UNPRESS while(COL_4 == PIN_STATE_LOW);

extern void initialise_monitor_handles(void);

#endif /* MAIN_H_ */
