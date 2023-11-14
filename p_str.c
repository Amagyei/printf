#include "main.h"

/*
 * p_str - 'print strings'
 *
 * @s - char to be stdout
 *
 * Description: iterate through a string printing each character
 *
 * Return: -1 or count
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
