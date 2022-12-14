#include "main.h"
/**
* print_last_digit - print last digit of a number
* @n: integer to check
* Return: 0
*/

int print_last_digit(int n)
{
if(n < 0)
{
n = n * -1;
return (n % 10);
}
return (n % 10);
}
