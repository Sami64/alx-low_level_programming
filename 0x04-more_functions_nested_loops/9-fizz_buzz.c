#include <stdio.h>

/**
* main - fizz buzz test
* Description: Multiples of 3, print Fizz, Multiples of 5 , print Buzz.
* Multiples of both 3 and 5 should print FizzBuzz
* Return: 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
continue;
}
if (i % 3 == 0)
{
printf("Fizz ");
continue;
}
if (i % 5 == 0)
{
printf("Buzz ");
continue;
}
printf("%d ", i);
}
printf("\n");

return (0);
}
