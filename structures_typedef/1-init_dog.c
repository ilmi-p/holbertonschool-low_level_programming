#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog
 * @name: Nom du chien
 * @age: Âge du chie
 * @owner: Propriétaire du chie
 */
void init_dog(dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
