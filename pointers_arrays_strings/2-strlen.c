#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to measure
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
int panda;
for (panda = 0; s[panda] != '\0'; panda++)
;
return (panda);
}

