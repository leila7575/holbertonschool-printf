#include "main.h"
/**
 *
 * @spec: specifier
 * Return: pointer to function
 */
int _format_type (char c,va_list arg)
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
		if (*(mystruct[i].spec) == c)
		{
			return (mystruct[i].print(arg));
		}
	}

	if (c == '%')
	{
		return(_putchar('%'));
	}
	else
	{
		_putchar('%');
		_putchar(c);
		return (2);
	}

}
