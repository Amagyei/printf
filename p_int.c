#include "main.h"

/**
 * p_int - writes the character c to stdout
 *
 * @s: format specifier
 *
 * Return: On success 1.
 *
 */

int p_int(int n)
{
    int count = 0;

    if (n < 0)
    {
        if (ptch('-') == -1)
            return -1;
        count++;
        n = -n;
    }

    return count + p_uint(n);
}
