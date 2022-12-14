#include "main.h"
/**
* print_alphabet_x10 - Print lowercase alphabets 10x
* Return: 0
*/

void print_alphabet_x10(void)
{
char a = 'a';
int count = 0;

while (count < 10)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
count++;
a='a';
}
}
