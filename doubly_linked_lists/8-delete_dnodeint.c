#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes a node at a given index.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = *head;
if (*head == NULL)
return (-1);
while (current != NULL)
{
if (count == index)
{
if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
current = current->next;
count++;
}
return (-1);
}
