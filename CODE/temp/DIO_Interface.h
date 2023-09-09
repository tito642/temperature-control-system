
// * Created: 8/9/2023 4:59:46 PM
 //*  Author: AHMED ELATTAR

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/*Macros for Direction*/
#define  DIO_OUTPUT   		1
#define  DIO_INPUT    		0

/*Macros for Values*/
#define 	 DIO_HIGH      	1
#define 	 DIO_LOW       	0

/*Macros for Port number*/
#define 	 DIO_PORTA	  	0
#define 	 DIO_PORTB	  	1
#define 	 DIO_PORTC	  	2
#define 	 DIO_PORTD	  	3

/*Macros for Port number*/
#define 	 DIO_PIN0	  0
#define 	 DIO_PIN1	  1
#define 	 DIO_PIN2	  2
#define 	 DIO_PIN3	  3
#define 	 DIO_PIN4	  4
#define 	 DIO_PIN5	  5
#define 	 DIO_PIN6	  6
#define 	 DIO_PIN7	  7


void DIO_voidSetPinDirection(u8 copy_u8port, u8 copy_u8pin, u8 copy_u8Direction);

void DIO_voidSetPinValue(u8 copy_u8port, u8 copy_u8pin, u8 copy_u8Value);

u8 DIO_u8GetPinValue(u8 copy_u8port, u8 copy_u8pin);

void DIO_voidSetPortDirection(u8 copy_u8port, u8 copy_u8Direction);

void DIO_voidSetPortValue(u8 copy_u8port, u8 copy_u8Value);

void DIO_voidTogglePinValue(u8 copy_u8port,u8 copy_u8Pin);


#endif
