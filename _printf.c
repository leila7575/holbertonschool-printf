#include "main.h"

/**
 * check_formats - Checks for specifiers
 * @spec: specifier
 *
 * Return: Pointer to function
 */
static int (*check_formats(const char *spec))(va_list)
{
	unsigned int i;
	format_t mystruct[] = {
		{"c", print_c},
		{"s", print_strings},
		{"i", print_i},
		{"d", print_d},
		{"%", print_37},
		{NULL, NULL}
	};

	for (i = 0; mystruct[i].spec != NULL; i++)
	{
		if (*(mystruct[i].spec) == *format)
		{
			break;
		}
	}
	return (mystruct[i].print);
}

/**
 * _printf - Function that prints with a format
 * @format: Format passed to printf
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list mylist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(mylist, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);

		f = check_formats(&format[i + 1]);
		if (f != NULL)
		{
			count += f(mylist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);

		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(mylist);
	return (count);
}

