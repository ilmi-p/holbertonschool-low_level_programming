#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur vers la structure dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
