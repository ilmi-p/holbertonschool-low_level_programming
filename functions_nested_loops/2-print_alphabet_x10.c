#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i, alp;
for (i = 0; i < 10; i++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
