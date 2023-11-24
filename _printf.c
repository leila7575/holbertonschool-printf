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
	va_list avar;
	int totallen = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	var_star(avar, format);

	while (*format)
	{
		if (*format == '%' )	
		{
			format ++;
			if (*format == '\0')
				break;
			tolallen += _fuction_type(*format, avar);
		}
		else
		{
			_putchar(*format);
			totallen++;
		}
		format++;
	}
	va_end(avar);
	
	return (totallen);
