#include <stdio.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
if (h == NULL)
{
printf("[0] (nil)\n");
}
else
{
while (h != NULL)
{
printf("La longueur est de %u et il contient %s\n", h->len, h->str);
h = h->next;
count++;
}
}
return (count);
}
