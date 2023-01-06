#include "main.h"

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: pointer to string
* Return: 0
*/

int is_palindrome(char *s)
{
int length;
length = get_length(s) - 1;
return (check_palindrome(s, --length));
}

/**
* get_length - returns the length of a string
* @s: pointer to string
* Return: 0
*/

int get_length(char *s)
{
if (*s == '\n')
return (1);
else
return (1 + get_length(++s));
}

/**
* check_palindrome - checks if a string is a palindrome
* @s: pointer to string
* @length: length of string
* Return: 0
*/

int check_palindrome(char *s, int length)
{
if (*s  == *(s + length))
{
if (length <= 0)
return (1);
else
return (check_palindrome(++s, length - 2));
}
else
return (0);
}
