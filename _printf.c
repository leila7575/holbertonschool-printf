#include"main.h"
# include <stdarg.h>
#include <string.h>

/**
 * _printf - is a function to print a string formated.
 * @format: string of format
 *
 * Return: the total number of the caracter print.
 */

int _printf(const char * const format, ...)
{
	va_list arg;
	int lengh = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	var_star(arg, format);

	while (*format)
	{
		if (*format == '%' )	
		{
			format ++;
			if (*format == '\0')
				break;
			lengh += _format_type(*format, arg);
		}
		else
		{
			_putchar(*format);
			lengh++;
		}
		format++;
	}
	va_end(arg);
	
	return (lengh);
