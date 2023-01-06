/*
 * File:   newmain.c
 * Author: jard
 *
 * Created on November 16, 2022, 3:17 PM
 */


#include <xc.h>

volatile uint8_t adcLo;
volatile uint8_t adcHi;
volatile uint16_t adcVal;
extern void SoundSensor(void);

int main(void) 
{
    
    asm("NOP");
    SoundSensor(); 

    return 0;
}
