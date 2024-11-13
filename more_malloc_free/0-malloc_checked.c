#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Alloue de la mémoire en utilisant mallo
* @b: Taille de la mémoire à allou
* 
* Return: Pointeur vers la mémoire allouée. Si l'allocation échoue
*         termine le processus avec un statut de 98.
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
