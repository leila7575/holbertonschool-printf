#include "main.h"

/**
 *_print_int - prints integer
 *@args: argument to be printed
 *Return: integer
 */
int _print_int(va_list args)
{
	int n = va_arg(args, int);
	int last = 0;
	int total = 0;
	int i = 0;
	int arr[20];

	if (n == 0)
	{
		_putchar('0');
		total += 1;
		return (total);
	}
	if (n < 0)
	{
		_putchar('-');
		total += 1;
		n = -n;
	}
	while (n != 0)
	{
		last = n % 10;
		n = n / 10;
		arr[i] = last;
		total++;
		i++;
	}

	while (i > 0)
	{
		_putchar(arr[--i] + '0');
	}

	return (total);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int _print_d(va_list args)
{
	int num = va_arg(args, int);
	int number, last_digit = num % 10, cdigit;
	int  i = 1;
	int exp = 1;

	num = num / 10;
	number = num;

	if (last_digit < 0)
	{
		_putchar('-');
		number = -number;
		num = -num;
		last_digit = -last_digit;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = num;
		while (exp > 0)
		{
			cdigit = number / exp;
			_putchar(cdigit + '0');
			number = number - (cdigit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last_digit + '0');

	return (i);
}
