#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _print_arg_string(va_list avar);
int _print_string(char *str);
int _print_char(va_list avar);
int _function_type(char c, va_list avar);
int _print_int(va_list arg);
int _putchar(char c);

/**
 * struct formats - Structure to define format specifiers and their associated functions
 * @t: First letter of the type
 * @f: Function executed per type
 */
typedef struct formats
{
    char t;
    int (*f)(va_list p);
} formats;

#endif /* MAIN_H */

