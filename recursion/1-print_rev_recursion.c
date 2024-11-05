#include "main.h"
/**
 * _print_rev_recursion - Affiche une chaîne de caractères en sens invers
 * @s: La chaîne de caractères à afficher en invers
 *
 * Description: Cette fonction affiche une chaîne de caractères en utilisant la récursivi
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
