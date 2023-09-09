/* File Guard 
 *  * Created: 8/9/2023 4:59:46 PM
 *  Author: AHMED ELATTAR*/
#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(VAR,BITNO)            VAR = VAR | (1<<BITNO)
#define CLR_BIT(VAR,BITNO)            VAR = VAR & (~(1<<BITNO))
#define GET_BIT(VAR,BITNO)            ((VAR>>BITNO)&1)
#define TOG_BIT(VAR,BITNO)            VAR = VAR ^ (1<<BITNO)


#endif
