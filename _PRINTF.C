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
