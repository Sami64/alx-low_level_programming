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
if (i > 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
count++;
_putchar('\n');
}
}
