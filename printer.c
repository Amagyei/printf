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
		if (format[i] == '%' && format [i + 1] == 'd')
		{
			ptch(va_arg(args, int));
			i++;
		}
		if (format[i] == '%' && format [i] == 'f')
		{
			ptch(va_arg(args, int));
			i++;
		}
		if (format[i] == '%' && format [i] == 'x')
		{
			ptch(va_arg(args, int));
			i++;
		}
		if (format[i] == '%' && format [i] == 'c')
		{
			ptch(va_arg(args, int));
			i++;
		}
		if (format[i] == '%' && format [i + 1] == 's')
		{
			ptch(va_arg(args, int));
			i++;
		}
		if (format[i] == '%' && format [i + 1] == 'c')
		{
			ptch(va_arg(args, int));
			i++;
		}`
		count++;
	}
	va_end(args);
	return(count);
}
