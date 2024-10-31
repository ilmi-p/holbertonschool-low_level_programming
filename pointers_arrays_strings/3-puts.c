#include "main.h"
/**
 * _puts - Affiche une chaîne de caractères, suivie d'une nouvelle ligne
 * @str: Pointeur vers la chaîne de caractères à afficher
 *
 * Description: Cette fonction parcourt chaque caractère de la chaîne
 * de caractères passée en paramètre et l'affiche en utilisant
 * la fonction _putchar. Elle termine par un caractère de nouvelle ligne.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; str++)
{
_putchar(str[i]);
}
_putchar('\n');
}
