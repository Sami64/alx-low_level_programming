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
return '+';
}
else if (n < 0)
{
return '-';
}
else
{
return (0);
}
}