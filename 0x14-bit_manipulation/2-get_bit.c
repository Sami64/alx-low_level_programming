#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to get bit from
* @index: index of bit to get
* Return: value of bit at index, or -1 if an error occurred
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int temp;

if (index > 64)
return (-1);

temp = n >> index;

return (temp & 1);
}
