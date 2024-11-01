#include "main.h"
/**
 * puts2 - prints all characters of a string
 * @str: the string to be printed
 *
 * This function prints each character of the string
 * starting from the first character, followed by a new line.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')  
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
