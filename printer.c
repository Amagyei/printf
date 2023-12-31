#include "main.h"


/**
 * _printf - writes the character c to stdout
 *
 * @format: format specifier
 *
 * Return: On success 1.
 *
 */

int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			ptch(format[i]);
			count++;
		}
		else
		{
			if (format[i] == '%' && format[i + 1] == 's')
			{
				count += p_str(va_arg(args, char *));
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'd')
			{
				count += p_int(va_arg(args, int));
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'b')
			{
				count += p_bin(va_arg(args, int));
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'i')
			{
				count += p_int(va_arg(args, int));
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'c')
			{
				ptch(va_arg(args, int));
				count++;
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				ptch('%');
				count++;
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'u')
			{
				count += p_uint(va_arg(args, int));
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'o')
			{
				count += p_oct(va_arg(args, int));
				i++;
			}
			if (format[i] == '%' && format[i + 1] == 'S')
			{
				count += p_str(va_arg(args, char *));
				i++;
			}
		}

	}
	va_end(args);
	return (count);
}
