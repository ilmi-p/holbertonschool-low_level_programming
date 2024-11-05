#include "main.h"
/**
 * _puts_recursion - Imprime une chaîne suivie d'une nouvelle ligne.
 * @s: La chaîne à imprimer.
 *
 * Description: Cette fonction imprime une chaîne en utilisant la récursivité,
 * caractère par caractère, puis imprime une nouvelle ligne à la fin.
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
