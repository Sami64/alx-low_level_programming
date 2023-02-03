#include "main.h"
#include <stdio.h>

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number to set bit
* @index: index of bit to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int temp;
unsigned int i;

if (index > 64)
return (-1);

i = index;
for (temp = 1; i > 0; temp *= 2, i--)
;
if ((*n >> index) & 1)
*n -= temp;

return (1);
}
