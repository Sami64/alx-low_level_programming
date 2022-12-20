#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: pointer to string
* Return: 0
*/

int _atoi(char *s)
{
int i = 0;
int j = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
j++;
}
i++;
}
i = 0;
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
if (j % 2 == 0)
{
return (s[i] - '0');
}
else
{
return (s[i] - '0') * -1;
}
}
i++;
}
return (0);
}
