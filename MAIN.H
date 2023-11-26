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
FUNCTION_TYPE.C
#include "main.h"

/**
 
_function_type - check the code
@c: char
@avar: va_list
Return: Number of character print
*/
int _function_type(char c, va_list avar)
{
        formats list[] = {
                {"c", _print_char},
                {"s", _print_arg_string},
                {"d", _print_int},
                {"i", _print_int},
                {NULL, NULL}
        };

        int i = 0;

        while (list[i].t != NULL)
        {
                if (*list[i].t == c)
                {
                        return (list[i].f(avar));
                }
                i++;
        }

        if (c == '%')
        {
                return (_putchar('%'));
        }
        else
        {
                _putchar('%');
                _putchar(c);
                return (2);
        }
