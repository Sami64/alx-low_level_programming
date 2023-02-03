#include "main.h"
#include <stdio.h>

/**
* flip_bits - returns the number of bits you would need to flip to get
* from one number to another
* @n: number to flip bits from
* @m: number to flip bits to
* Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int temp;
int count;

temp = n ^ m;
count = 0;

while (temp)
{
count++;
temp &= (temp - 1);
}
return (count);
}
