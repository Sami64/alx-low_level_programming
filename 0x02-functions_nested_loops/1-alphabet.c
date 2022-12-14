#include <stdio.h>
/**
* print_alphabet - Print lowercase alphabets
* Return: 0
*/

void print_alphabet(void)
{
char a = 'a';

while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
