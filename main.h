#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - structure with the format characters to be printed
 * @spec: pointer to the type to be printed
 * @print: function to print
 *
 */

typedef struct format
{
	char *spec;
	int (*print)(va_list);
} format_t;

int print_number(int n);
int print_i(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int print_37(void);
int print_c(va_list arg);
int print_strings(va_list arg);
int _putchar(char c);
int print_char(va_list arg)
int _printf(const char *format, ...);

#endif
