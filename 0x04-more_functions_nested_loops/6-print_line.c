#include "main.h"

/**
* print_line - prints _
* @n - integer for number of times
* Return: 0
*/

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('_');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar('_');
_putchar('\n');
}
}
}
