/*
 * button.c
 *
 * Created: 12/10/2022 10:54:15 pm
 *  Author: mohamed_ibrahim
 */ 


#include "button.h"

/************************************************************************/
/*           BUTTON DRIVER FUNCTIONS DEFINITIONS                        */
/************************************************************************/

// Initialize Button PIN
void BUTTON_init(uint8_t buttonPin, uint8_t buttonPort)
{
	DIO_init(buttonPin, buttonPort, INPUT);
}

// READ Button PIN Value
void BUTTON_read(uint8_t buttonPin, uint8_t buttonPort, uint8_t *value)
{
	DIO_read(buttonPin, buttonPort, value);
}
