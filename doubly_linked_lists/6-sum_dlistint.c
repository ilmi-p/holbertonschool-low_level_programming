#include "lists.h"
/**
 * sum_dlistint - Calcule la somme des valeurs des nœuds d'une list
 *                doublement chaîné
 * @head: Pointeur vers le premier nœud de la liste.
 *
 * Return: La somme des valeurs des nœuds, ou 0 si la liste est vide.
 */
int sum_dlistint(dlistint_t *head)
{
	int conteneur = 0;
	if (head == NULL)
	{return (0);}
	
	while (head != NULL)
	{
		conteneur += head->n;
		head = head->next;
	}
	return (conteneur);	
}
