#include "main.h"
/**
* _print_rev_recursion - Affiche une chaîne de caractères en sens inver
* @s: La chaîne  affich
*
* Description: Affiche la chaîne en sens inverse en utilisant la récursi
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
