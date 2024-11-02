#include <stdio.h>
/**
 * _strcat - Concatène deux chaînes de caractèr.
 * @dest: La chaîne de destination, qui doit être assez grande pour contenir le résulta
 * @src: La chaîne source qui sera ajoutée à la fin de `dest`.
 *
 * Cette fonction ajoute `src` à la fin de `dest`, remplaçant le caractère n
 * de `dest` par le premier caractère de `src`, puis ajoute un caractère nul `\
 * à la fin du résultat
 *
 * Retourne: Un pointeur vers la chaîne résultante `dest
 */
char *_strcat(char *dest, char *src) 
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return dest;
}
int main() {
char dest[50] = "Hello, ";
char src[] = "Betty!";
_strcat(dest, src);
printf("%s\n", dest);
return 0;
}
