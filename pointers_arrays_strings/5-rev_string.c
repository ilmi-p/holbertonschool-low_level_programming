#include "main.h"
#include <stdio.h>
#include <string.h>
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
int i;
int length = strlen(s);
for (i = length - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
