#include "main.h"

int _printf(const char *format, ...)
{
    unsigned int i, count = 0;
    va_list args;

    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            ptch(format[i]);
            count++;
        }
        else
        {
            i++; // Move to the next character after '%'
            if (format[i] == 'c')
            {
                ptch(va_arg(args, int));
            }
            else if (format[i] == 's')
            {
                count += p_str(va_arg(args, char *));
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
            count++;
        }
    }

    va_end(args);
    return count;
}
