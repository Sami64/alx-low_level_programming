#include "main.h"

/**
* _isdigit - checks for digit 0 - 9
* @c: Integer to check
* Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
