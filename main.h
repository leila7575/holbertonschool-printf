#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>

int _printf(const char *format, ...);
int _print_percent(va_list list);
int _print_string(va_list list);
int _print_char(va_list list);
int _putchar(char c);
int _print_int(va_list args);
int _print_d(va_list args);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct type_print
{
	char type;
	int (*f)(va_list);
} type_print;


#endif
