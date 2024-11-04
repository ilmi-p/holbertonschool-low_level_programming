#include "main.h"
/**
 * _memset - Remplit les n premiers octets de la zone mémoire pointée par
 *            avec l'octet constant b.
 * @s: Pointeur vers la zone mémoire à rempli
 * @b: Octet constant à utiliser pour remplir la mémoir
 * @n: Nombre d'octets à remplir
 *
 * Return: Pointeur vers la zone mémoire remplie (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n; i++)
{
s[i] = b;
}
return (s);
}
