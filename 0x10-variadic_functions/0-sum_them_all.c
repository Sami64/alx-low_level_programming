#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum of all its parameters
* @n: number of parameters
* Return: sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
unsigned int sum = 0;

va_start(ap, n);
for (i = n; i >= 0; i = va_arg(ap, unsigned int))
{
sum = sum + i;
}
va_end(ap);
return (sum);
}
