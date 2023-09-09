// * Created: 8/9/2023 4:59:46 PM
 //*  Author: AHMED ELATTAR
#include <avr/io.h>
#include "ADC_driver.h"
#include "LCD.h"
char read_val;
unsigned short temperatue;

int main(void)
{
	DDRC = 0b00000111;
	PORTC =0b00000000;
	LCD_vInit();
	ADC_vinit();
	LCD_vSend_string("temperature=");
		 LCD_movecursor(2,1);
			LCD_vSend_string ("by ahmed elattar ");



while(1)
   {
	 temperatue=(ADC_u16Read()*0.25);

			if(temperatue<10){
				LCD_movecursor(1,13);
							LCD_vSend_char(30);
							LCD_vSend_char((temperatue%10)+48);
							LCD_vSend_char(0xDF);
							LCD_vSend_char('c');

			}

			else if( temperatue<100)
					{
				LCD_movecursor(1,13);
						LCD_vSend_char((temperatue/10)+48);
						LCD_vSend_char((temperatue%10)+48);
						LCD_vSend_char(0XDF);
						LCD_vSend_char('c');

						if(temperatue<20)
						{
							PORTC =0b00000001;
						}
						else if (temperatue>30)
						{
							PORTC =0b00000010;
						}
						else
						{
							PORTC =0b00000100;
						}
					}
					else
					{

					}

			    }
			}

