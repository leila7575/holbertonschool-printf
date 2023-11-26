#include <stdarg.h>
#include <string.h>
#include "main.h"

/**  
 *  _printf - function to print a string formated
 *  @format: string of format
 *  Return: total number of characters
 */

int _printf(const char format, ...)
{
	va_list avar;
	int res = 0;


	if (!format || (strlen(format) == 1 && format[0] == '%'))
		return (-1);

	va_start(avar, format);

	while (format)
	{

		if (format == '%')
		{
			format++;
			if (format == '\0')
				break;
			res += _function_type(format, avar);
		}
		else
		{
			_putchar(format);
		}
		format++;
	}

	va_end(avar);

	return (res);
}
