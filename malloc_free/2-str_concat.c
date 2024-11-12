#include <stdlib.h>
/**
 * str_concat - Concatène deux chaînes de caractèr
 * @s1: Première chaîne de caractère
 * @s2: Deuxième chaîne de caractères.
 *
 * Return: Pointeur vers un espace mémoire contenant s1 suivi de s2,
 * ou NULL en cas d'échec d'allocation
 */
char *str_concat(char *s1, char *s2)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i;
unsigned int j;
char *concat_str;
if (s1 != NULL)
{
while (s1[len1])
len1++;
}
if (s2 != NULL)
{
while (s2[len2])
len2++;
}
concat_str = malloc((len1 + len2 + 1) * sizeof(char));
if (concat_str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat_str[i] = s1[i];
for (j = 0; j < len2; j++)
concat_str[i + j] = s2[j];
concat_str[i + j] = '\0';
return (concat_str);
}
