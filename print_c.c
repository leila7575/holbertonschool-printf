#include "main.h"

/**
 * print_c - prints character
 * @arg: arguments
 * Return: 1
 */
int print_c(va_list arg);
{
	char c;
	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
