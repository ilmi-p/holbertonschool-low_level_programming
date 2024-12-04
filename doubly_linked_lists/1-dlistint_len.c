#include <stddef.h>
#include "lists.h"
/**
* dlistint_len - Renvoie le nombre d'éléments dans une liste dlistint_
* @h: Pointeur vers le début de la liste.
*
* Return: Nombre d'éléments dans la list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
