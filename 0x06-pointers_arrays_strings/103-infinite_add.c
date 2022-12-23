#include <string.h>
#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer that the function will use to store the result
* @size_r: buffer size
* Return: the result of the addition, or 0 if the result can not be stored in r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, carry, sum;
int len1 = strlen(n1);
int len2 = strlen(n2);
int max_len = (len1 > len2) ? len1 : len2;

for (i = 0; i < size_r; i++)
r[i] = '0';

carry = 0;
i = len1 - 1;
j = len2 - 1;
k = size_r - 1;

while (i >= 0 || j >= 0)
{
int a = (i >= 0) ? n1[i] - '0' : 0;
int b = (j >= 0) ? n2[j] - '0' : 0;

sum = a + b + carry;
carry = sum / 10;

r[k--] = sum % 10 + '0';
i--;
j--;
}

if (carry > 0)
{
if (k < 0)
return (0);
r[k--] = carry + '0';
}
for (i = 0; k >= 0; i++, k--)
r[i] = r[k];
return (r);
}
