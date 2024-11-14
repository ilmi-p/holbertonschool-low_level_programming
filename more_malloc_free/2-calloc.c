#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zér
 * @nmemb: Nombre d'éléments à allo
 * @size: Taille de chaque élémen
 *
 * Return: Pointeur sur la mémoire allouée, ou NULL en cas d'éch
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
((char *)ptr)[i] = 0;
return (ptr);
}
