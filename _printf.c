#include "main.h"
  
/**  
 *  _printf - function to print a string formatted
 *  @format: string of format
 *  Return: total number of characters
 */

int _printf(const char *format, ...)
{
    int res = 0, i = 0, j = 0, count = 0;

    type_print storage[] = {
        {'s', _print_string},
        {'c', _print_char},
        {'%', _print_percent},
        {0, NULL}
    };

    if (!format || (format[0] == '%' && format[1] == '\0'))
        return (-1);
    va_list arg;
    va_start(arg, format);

    for (i = 0; format[i] != '\0' && format != NULL; i++)
    {
        if (format[i] == '%')
        {
            for (j = 0; storage[j].type != 0; j++)
            {
                if (format[i + 1] == storage[j].type)
                {
                    count += storage[j].f(arg);
                    i++;
                    break;
                }
            }
        }
        else
            count += _putchar(format[i]);
    }

    va_end(arg);

    return (count);
}

