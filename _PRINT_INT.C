#include "main.h"

/**
 *_print_int - function
 *@arg: argument variable
 *Return: size
 *
 */
int _print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int r = 0;
	int size = 0;
	int i = 0;
	int arr[20];

	if (n == 0)
	{
		_putchar('0');
		size += 1;
		return (size);
	}
	if (n < 0)
	{
		_putchar('-');
		size += 1;
		n = -n;
	}
	while (n != 0)
	{
		r = n % 10;
		n = n / 10;
		arr[i] = r;
		size++;
		i++;
	}

	while (i > 0)
	{
		_putchar(arr[--i] + '0');
	}

	return (size);
}
