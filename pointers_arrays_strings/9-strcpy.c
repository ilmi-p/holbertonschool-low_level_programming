#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: The destination buffer to copy the string to
 * @src: The source string to be copied
 *
 * Return: A pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
