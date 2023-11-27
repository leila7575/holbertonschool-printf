
# Printf project




## Description
The printf() function is used to print formatted output to the standard output stdout.
## Format specifiers

| Function | Specifier | Description
--- | --- | --- |
|int _print_char | '%c' | Prints a character|
| int _print_string| '%s' | Prints a string|
|int _print_percent| '%' | Prints percentage|
|int _print_int | '%i' | Prints an integer|
|int _print_d | '%d' | Prints a decimal (base 10) number|

## Files

| File| Description 
--- | --- 
|_printf.c | File where the function _printf is executed. It contains an array with all the format specifiers
|_printf_function.c| File containing the _putchar function, _print_char, _pirnt_string and _print_percent functions
|main.h| Header file containing the prototypes, the type_print structure and the standard libraries
|print_int.c | File containing the _print_int and the _print_d function to handle integers and decimal in base 10 numbers
|man_3_printf | man page for the p_printf function

##  Compilation
The code should be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

C files containing a main function should not be pushed in the root directory of your project. 

Our main files will include our main header file:
#include main.h
## Authorized functions and macros
write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)

va_start (man 3 va_start)

va_end (man 3 va_end)

va_copy (man 3 va_copy)

va_arg (man 3 va_arg)
## Requirements
The allowed editors are vi, vim, and emacs.

The files will be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.

Every file in the project should end with a new line.

It is mandatory to have a README.md file at the root of the project folder.

The code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl.

Global variables are not allowed.

Each file should contain no more than 5 functions.

The prototypes of all the functions must be included in a header file named main.h.

## Usage/Examples 

Prototype: 

int _printf(const char *format, ...);

Examples

_printf("character:%c\n", 'A');

Outpout: character: A

_printf("string:%s\n","Hello world");

Outpout: string: Hello world

_printf("percent:%%\n");

Outpout: percent: %

_printf("integer:%i\n", '8');

Outpout: integer: 8






## Testing

We will test the program with main.c file test. The main.c file will contain the following code:

    ~/c/printf$ cat main.c 
    #include <limits.h>
    #include <stdio.h>
    #include "main.h"

    /**
    * main - Entry point
    *
    * Return: Always 0
    */
    int main(void)
    {
    int len;
    int len2;


    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    return (0);
}

The output after compiling the program will be:

    ~/c/printf$ ./printf
    Let's try to printf a simple sentence.
    Let's try to printf a simple sentence.
    Length:[39, 39]
    Length:[39, 39]
    Negative:[-762534]
    Negative:[-762534]
    Len:[12]
    Len:[12]
