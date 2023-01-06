#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer
* Return: 0
*/

int _sqrt_recursion(int n)
{
return (sqrt(n, 1));
}

/**
* sqrt - returns the natural square root of a number
* @n: integer
* @i: integer
* Return: 0
*/

int sqrt(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (sqrt(n, i + 1));
}
}
