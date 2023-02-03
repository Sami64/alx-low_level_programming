#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: number to set bit
* @index: index of bit to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int temp;

if (index > 64)
return (-1);

for (temp = 1; temp > 0; temp--, temp *= 2)
;
*n *= temp;

return (1);
}
