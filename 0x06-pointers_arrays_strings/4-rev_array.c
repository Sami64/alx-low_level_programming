#include "main.h"

/**
* reverse_array - reverses content of array of int
* @a: pointer to array of integers
* @n: number of elements
* Return: 0
*/

void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < sizeof(a); i++)
;

for (j = 0; j < n; j++)
{
a[j] = a[i];
i--;
}
}
