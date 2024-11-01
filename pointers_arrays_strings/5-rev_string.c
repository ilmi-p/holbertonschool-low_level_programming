#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function takes a string as input and
 * prints the characters of the string in reverse order,
 * followed by a new line.
 */
void rev_string(char *s)
{
int i =0 ,a;
while (s[i] != '\0')
{
i++;
}
a = i-1;
for (i=a;i >= 0;i++)
{
_putchar (s[i]);
}
_putchar ('\n');
}
