#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two
* diagonals of a square matrix of integers
* @a: array
* @size: size of array
* Return: 0
*/

void print_diagsums(int *a, int size)
{
int i, sum, sizer;

i = 0;
sum = 0;
sizer = size * size;
while (i < sizer)
{
if (i % (size + 1) == 0)
sum += a[i];
i++;
}
printf("%d, ", sum);
i = 0;
sum = 0;
while (i < sizer)
{
if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
sum += a[i];
i++;
}
printf("%d\n", sum);
}
