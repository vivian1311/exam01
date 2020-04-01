#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()
{
    uLCD.line(0, 0, 0, 6, RED);
    uLCD.line(0, 0, 6, 0, RED);
    uLCD.line(6, 0, 6, 6, RED);
    uLCD.line(0, 6, 6, 6, RED);

}