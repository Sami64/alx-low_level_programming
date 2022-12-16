#include "main.h"

/**
* more_numbers - prints 0 - 14 10 times
* Return: 0
*/

void more_numbers(void)
{
int i;
int count = 0;

while (count < 10)
{
for (i = 0; i < 15; i++)
{
_putchar(i + '0');
}
count++;
_putchar('\n');
}
_putchar('\n');
}
