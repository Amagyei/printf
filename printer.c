#include "main.h"


/**
 * _printf - writes the character c to stdout
 *
 * @format: format specifier
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
		else
		{
			i++;
			if (format[i] == 'd')
			{
				ptch(va_arg(args, int));
			}
			else if (format[i] == 'f')
			{
				ptch(va_arg(args, int));
			}
			else if (format[i] == 'x')
			{
				ptch(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				count += p_str(va_arg(args, char *));
			}
			else if (format[i] == 'c')
			{
				ptch(va_arg(args, int));
			}
			else if (format[i] == '%')
			{
				ptch('%');
			}
			else
			{
				// Handle unknown format specifiers
                ptch('%');
                ptch(format[i]);
                count += 2;
			}
		}
		count++;
	}
	va_end(args);
	return(count);
}
