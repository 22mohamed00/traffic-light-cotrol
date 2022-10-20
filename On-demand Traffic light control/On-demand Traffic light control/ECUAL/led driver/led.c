/*
 * led.c
 *
 * Created: 12/10/2022 11:08:22 pm
 *  Author: mohamed_ibrahim
 */ 


#include "led.h"

/************************************************************************/
/*           LED DRIVER FUNCTIONS DEFINITIONS                           */
/************************************************************************/

// Initialize The LED PIN
void LED_init(uint8_t ledPin, uint8_t ledPort)
{
	DIO_init(ledPin, ledPort, OUTPUT);
}

// Turn ON The LED PIN
void LED_on(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin, ledPort, HIGH);
}

// Turn OFF The LED PIN
void LED_off(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin, ledPort, LOW);
}

// Toggle The LED PIN
void LED_toggle(uint8_t ledPin, uint8_t ledPort)
{
	DIO_toggle(ledPin, ledPort);
}
