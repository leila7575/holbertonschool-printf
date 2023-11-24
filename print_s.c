#include "main.h"
/**
 * print_strings - print strings
 * @arg: argument
 * Return: string to be printed
 */
int print_strings(va_list arg)
{
	int i = 0
<<<<<<< HEAD
	int length
	char *str 
	str = va_arg(arg, char*);
=======
		int length
		char *str
		str = va_arg(arg, char*);
>>>>>>> 2b4ac787b07a8de569c02dfe3649715bf2d8c2a8

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
<<<<<<< HEAD
		
=======

>>>>>>> 2b4ac787b07a8de569c02dfe3649715bf2d8c2a8
}
