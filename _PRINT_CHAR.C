#include <unistd.h>
#include "main.h"

/**

  _print_char - check the code
  @avar: variadic argument
Return: 1 character
*/
int _print_char(va_list avar)
{
	char c;

	c = va_arg(avar, int);
	_putchar(c);
	return (1);
}
