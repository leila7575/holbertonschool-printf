#include <unistd.h>
#include "main.h"

/**
 *  _print_char - check the code
 *  @list: va_list
 *  Return: 1
*/
int _print_char(va_list list)
{
	int aux;

	aux = va_arg(list, int);
	_putchar(aux);
	return (1);
}
