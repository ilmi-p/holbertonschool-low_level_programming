#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses _putchar to print each letter
 * of the alphabet from 'a' to 'z'.
 */
void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}