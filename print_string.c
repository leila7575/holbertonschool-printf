#include "main.h"

/
 
_print_arg_string - check the code
@avar: avar
Return: Always good function or null.
*/
int _print_arg_string(va_list avar)
{
        char s = va_arg(avar, char);

        return (_print_string(s));
}


/
 
_print_string - check the code
@s: s
Return: Always good function or null.
*/
int _print_string(char *s)
{
        int i = 0;

        if (!s)
                return (_print_string("(null)"));

        while (s[i])
        {
                _putchar(s[i]);
                i++;
        }
        return (i);
}
