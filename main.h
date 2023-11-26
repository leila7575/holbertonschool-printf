#ifndef MAIN
#define MAIN
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char format, ...);
int _print_arg_string(va_list avar);
int _print_string(chars);
int _print_char(va_list avar);
int _function_type(char c, va_list avar);
int _print_int(va_list arg);
int _putchar(char c);
/**

  struct formats - Struct dog*
  @t: first letter of the type
  @f: function execute per type
  */
typedef struct formats
{
	char t;
	int (f)(va_list p);
} formats;
#endif
