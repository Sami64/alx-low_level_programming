#include <string.h>

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

    /* Initialize result string to all zeros */
    for (i = 0; i < size_r; i++)
        r[i] = '0';

    /* Set carry to 0 and initialize indices i, j, and k */
    carry = 0;
    i = len1 - 1;
    j = len2 - 1;
    k = size_r - 1;

    /* Add digits starting from least significant digit */
    while (i >= 0 || j >= 0)
    {
        /* Get the digits at the current indices of n1 and n2 */
        int a = (i >= 0) ? n1[i] - '0' : 0;
        int b = (j >= 0) ? n2[j] - '0' : 0;

        /* Calculate sum and update carry */
        sum = a + b + carry;
        carry = sum / 10;

        /* Store the result in the current index of r and decrement indices */
        r[k--] = sum % 10 + '0';
        i--;
        j--;
    }

    /* Handle the case where there is a carry left over */
    if (carry > 0)
    {
        /* Check if there is space left in the result buffer */
        if (k < 0)
            return 0;  /* Not enough space, return 0 */

        /* Store the carry in the result buffer and decrement the index */
        r[k--] = carry + '0';
    }

    /* Move result string to the start of the buffer */
    for (i = 0; k >= 0; i++, k--)
        r[i] = r[k];

    /* Return a pointer to the result string */
    return r;
}
