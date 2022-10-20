/*
 * button.h
 *
 * Created: 12/10/2022 10:54:39 pm
 *  Author: mohamed_ibrahim
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_


#include "../../MCAL/DIO Driver/dio.h"

// State For BUTTON Macros
#define LOW   0
#define HIGH  1

/************************************************************************/
/*           BUTTON DRIVER FUNCTION PROTOTYPE                           */
/************************************************************************/

// Initialize Button PIN
void BUTTON_init(uint8_t buttonPin, uint8_t buttonPort);

// READ Button PIN Value
void BUTTON_read(uint8_t buttonPin, uint8_t buttonPort, uint8_t *value);




#endif /* BUTTON_H_ */