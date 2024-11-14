#include "main.h"
#include <stdlib.h>
/**
 * array_range - crée un tableau d'entiers de min à max inclus.
 * @min: valeur minimale.
 * @max: valeur maximale.
 * Retourne un pointeur vers le tableau créé ou NULL en cas d'erreur.
 * Si min > max, retourne NULL.
 * Si malloc échoue, retourne NULL.
 *
 * Return: un pointeur vers le tableau créé ou NULL en cas d'erreur.
 */
int *array_range(int min, int max)
{
int *array;
int i;
if (min > max)
return (NULL);
array = malloc((max - min + 1) * sizeof(int));
if (array == NULL)
return (NULL);
for (i = 0; i <= (max - min); i++)
{
array[i] = min + i;
}
return (array);
}
