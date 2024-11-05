#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 *
 * Description: This function prints each character of the string
 * using a while loop, and then adds a newline at the end.
 */
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
