/*
 * IRsensor.h
 *
 *  Created on: Sep 5, 2023
 *      Author: Morad
 */

#ifndef IRSENSOR_H_
#define IRSENSOR_H_
//-----------------------------------------------------------------
//  --------------------->  Macro Ports&Pins <---------------------
//-----------------------------------------------------------------
#define IR_PORT DIO_PORTD
#define IR_PIN DIO_PIN7
//-----------------------------------------------------------------

//-----------------------------------------------------------------
//  --------------------->    Macro Objects  <---------------------
//-----------------------------------------------------------------
#define IR_ActiveMode 0x01 //object is found
#define IR_NonActiveMode 0x00 // nothing there
//-----------------------------------------------------------------


//------------------------------------------------------------------
//  --------------------->Functions Prototypes<---------------------
//------------------------------------------------------------------
void IR_Init(void);
u8 IR_GetReading(void);
//------------------------------------------------------------------

#endif /* IRSENSOR_H_ */
