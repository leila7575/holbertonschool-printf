#include "main.h"

/**
 * _strlen - returns the length of a tring
 *@s: first character of the string
 * Return: len
 */
int _strlen(char *s)
{
	char *ptr = s;
	int  len;

	len = 0;
	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	return (len);
}

/**
 * print_strings - print strings
 * @arg: argument
 * Return: string to be printed
 */
int print_strings(va_list arg)
{
	int i = 0
	int len
	char *str
	str = va_arg(arg, char*);

	if (str == NULL)
	{
		str == "(null)";
	}

	len = strlen (str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);

}
