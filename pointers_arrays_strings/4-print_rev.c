#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int i = 0, a;
while (s[i] != '\0')
{
i++;
}
a = i - 1;
for (i = a; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
