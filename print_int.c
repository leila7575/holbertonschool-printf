#include "main.h"
#include <stdarg.h>

/**
 * print_number - Helper function to print an integer
 * @n: The integer to print
 * Return: The number of digits printed
 */
int print_number(int n)
{
	int count = 0;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		count++;
	}

	while (n / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		count++;
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}

	return count;
}

/**
 * print_i - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	return print_number(n);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */
int print_d(va_list args)
{
	int n = va_arg(args, int);
	return print_number(n);
}

