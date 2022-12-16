#include "main.h"

/**
* print_triangle - prints triangle
* @size: size of triangle
* Return: 0
*/

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= (size - 1))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
