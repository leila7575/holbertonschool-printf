#include "main.h"

/**
 * print_bin - prints binary number.
 * @value: parameter.
 * Return: integer
 */
int print_bin(va_list value)
{
	int flag = 0;
	int count = 0;
	int i, bit = 1, bin_digit;
	unsigned int num = va_arg(value, unsigned int);
	unsigned int bit_mask;

	for (i = 0; i < 32; i++)
	{
		bit_mask = ((bit << (31 - i)) & num);
		if (bit_mask >> (31 - i))
			flag = 1;
		if (flag)
		{
			bin_digit = bit_mask >> (31 - i);
			_putchar(bin_digit + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
