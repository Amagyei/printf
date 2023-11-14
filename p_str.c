#include "main.h"

/**
 * p_str - writes the character c to stdout
 *
 * @s: format specifier
 *
 * Return: On success 1.
 *
 */

int p_str(char *s)
{
	int count = 0;

	if (!s)
	{
		ptch('(');
		ptch('N');
		ptch('U');
		ptch('L');
		ptch('L');
		ptch(')');
		count = 5;
	}
	else
	{
		while (*s)
		{
			if (ptch(*s) == -1)
				return (-1);
			count++;
			s++;
		}
	}

	return (count);
}
