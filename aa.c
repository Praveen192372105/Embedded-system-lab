#include <reg51.h>
#include <stdio.h>

void main() 
{ 
    unsigned int i; 
    unsigned char num = 12; 
    unsigned long factorial = 1; 

    for (i = 1; i <= num; i++) 
    { 
        factorial = factorial * i; 
    } 

    P0 = factorial & 0xFF; 
    P1 = (factorial >> 8) & 0xFF; 
    P2 = (factorial >> 16) & 0xFF; 
    P3 = (factorial >> 24) & 0xFF; 
}
