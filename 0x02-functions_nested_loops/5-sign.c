#include "main.h"
/**
* print_sign - print sign if checks are valid
* @n: integer to check
* Return: 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n < 0)
{
_putchar('-');
}
else
{
_putchar('0');
}
}