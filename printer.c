#include "main.h"


/**
 * _printf - writes the character c to stdout
 * 
 * @format: format specifier
 *
 *
 *
 * Return: On success 1.
 *
 */

int _printf (const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	va_start (args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			ptch(format[i]);
		}
		if (format[i] == '%' && format [i] == 'c')
			ptch(va_arg(args, int)); 

		count++;
	}
	return(count);
}
