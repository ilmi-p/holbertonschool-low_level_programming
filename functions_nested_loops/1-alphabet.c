#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * This function prints the letters 'a' to 'z' followed by a new line.
 */
void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
_putchar(alp);
_putchar('\n');
}
