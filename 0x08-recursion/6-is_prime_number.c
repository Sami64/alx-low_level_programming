#include "main.h"

/**
* is_prime_number - returns 1 if the input integer is a prime number,
* otherwise return 0
* @n: integer
* Return: 0
*/

int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n < 4)
return (1);
return (primer(n, 2));
}

/**
* primer - prime helper function
* @n: integer
* @d: number incrementer acting as divisor
* Return: 0 if not prime, 1 if prime
*/

int primer(int n, int d)
{
if (n % d == 0)
return (0);
else if (_sqrt(n, 1) < d)
return (1);
else
return (primer(n, d + 1));
}
