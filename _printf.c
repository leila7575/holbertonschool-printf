#include"main.h"

/**
 * _printf - is a function to print a string formated.
 * @format: string of format
 *
 * Return: the total number of the caracter print.
 */

int _printf(const char * const format, ...)
{
	va_list arg;
	int length = 0;

	if (!format || strlen(format) == 1 && format[0] == '\0'))
		return (-1);

	var_start(arg, format);

	while (format)
	{
		if (format == '%')	
		{
			format++;
			if (format == '\0')
				break;
			length += _format_type(format, arg);
		}
		else
		{
			_putchar(format);
			length++;
		}
		format++;
	}
	va_end(arg);
	
	return (length);
}
