#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings with a limit on the number of bytes.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0') 
{
ptr++;
}
 while (n > 0 && *src != '\0') 
{
*ptr++ = *src++;
n--;
}
*ptr = '\0';
return dest;
}
