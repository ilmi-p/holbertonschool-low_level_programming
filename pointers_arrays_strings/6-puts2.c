#include "main.h"
#include <stdio.h>
/**
 * puts2 - Affiche chaque deuxième caractère d'une cha�
 * @str: Pointeur vers la chaîne de caractères |  affih
 * Cette fonction parcourt la chaîne `str` et imprim
 * chaque deuxième caractère, suivi d'une nouvelle ligne.
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
if (i % 2 == 0)
{
_putchar(str[i]);
}
_putchar('\n');
}
