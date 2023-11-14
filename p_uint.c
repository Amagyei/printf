#include "main.h"

/**
 * _printf - writes the character c to stdout
 *
 * @format: format specifier
 *
 * Return: On success 1.
 *
 */

int p_uint(unsigned int n)
{
    if (n / 10 != 0)
        return p_uint(n / 10) + ptch(n % 10 + '0');
    return ptch(n % 10 + '0');
}
