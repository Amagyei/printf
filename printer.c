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
            switch (format[i])
            {
            case 'c':
                ptch(va_arg(args, int));
                break;
            case 's':
                count += p_str(va_arg(args, char *));
                break;
            case '%':
                ptch('%');
                break;
            default:
                // Handle unknown format specifiers
                ptch('%');
                ptch(format[i]);
                break;
            }
            count++;
        }
    }

    va_end(args);
    return count;
}
