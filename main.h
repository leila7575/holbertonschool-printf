#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _strlen(const char *);
int print(char *);

int _printf(const char *, ...);

int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
