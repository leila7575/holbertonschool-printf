#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1); /* Utilisation de la fonction write sans parenthèses inutiles */
}



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




/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int _print_string(va_list list)
{
	char *p;

	p = va_arg(list, char*);

	if (p == NULL)	
	{
		p = "(null)";
	}

	return (write(1, p, strlen(p)));
}




/**
 * print_percent - print a symbol %
 * @list: percent to print 
 * Return: percent to print
 */

int _print_percent(va_list list)
{
	(void) list ; 
	return (_putchar('%'));
}
