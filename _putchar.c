#include "MAIN.H"
#include <unistd.h> /* Ajout de l'inclusion du fichier d'en-tête pour 'write' */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1); /* Utilisation de la fonction write sans parenthèses inutiles */
}

