#include <stdio.h>
#include "main.h"

/**
* print_buffer - prints a buffer
* @b: pointer to buffer
* @size: size of buffer
* Return: 0
*/

void print_buffer(char *b, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        /* Print the position of the first byte of the line in hexadecimal */
        if (i % 10 == 0)
            printf("%08x: ", i);

        /* Print the hexadecimal content of the buffer, 2 bytes at a time */
        printf("%02x ", b[i]);

        /* Print a space every 10 bytes */
        if (i % 10 == 9)
            putchar(' ');

        /* Print a new line every 20 bytes */
        if (i % 20 == 19)
            putchar('\n');
    }

    /* Print a new line if there are less than 20 bytes left */
    if (size % 20 != 0)
        putchar('\n');
}
