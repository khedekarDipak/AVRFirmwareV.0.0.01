#include <string.h>
#include <avr/delay.h>

#define Setbit(byte,bit) (byte |=(1<<bit))
#define Clearbit(byte,bit) (byte &~=(1<<bit))
#define  issetbit(byte,bit) ((byte) &=(1<<bit))

//Set PINMODE
#define OUTPUT 1
#define INPUT 0
//variables for SET output
#define HIGH 1
#define LOW 0
#include "GPIO.cpp"
