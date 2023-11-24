#include "main.h"
/**
 * print_strings - print strings
 * @arg: argument
 * Return: string to be printed
 */
int print_strings(va_list arg)
{
	int i = 0
		int length
		char *str
		str = va_arg(arg, char*);

	if (str == NULL)
	{
		str == "(null)";
	}

	length = strlen (str);
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	return (length);

}
