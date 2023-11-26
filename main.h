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
_PRINTF.C
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 
_printf - function to print a string formated
@format: string of format
*
Return: the total number of the caracter print
*/

int _printf(const char format, ...)
{
        va_list avar;
        int totalLen = 0;


        if (!format || (strlen(format) == 1 && format[0] == '%'))
                /Vérifier si la chaîne de format est NULL/
                return (-1);

        va_start(avar, format);

        while (format)
                /Boucle pour parcourir chaque caractère de format/
        {

                if (format == '%')
                        /Vérifier si le caractère actuel est un '%'/
                {
                        format++;
                        if (format == '\0')
                                break;
                        totalLen += _function_type(format, avar);
                        /Apl la fonction _function_type pour gérer le spécificateur de format/
                }
                else
                {
                        _putchar(format);
                        /Appeler directement _putchar pour imprimer le caractère/
                        totalLen++;
                }
                format++;
        }

        va_end(avar);

        return (totalLen);
        /Retourner le nombre total de caractères imprimés/

