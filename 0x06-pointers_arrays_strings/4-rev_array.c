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

for (i = 0; i < (n / 2); i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = j;
}
}
