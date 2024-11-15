#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - crée une nouvelle structure dog_
 * @name: nom du chien
 * @age: âge du chie
 * @owner: propriétaire du chie
 * 
 * Return: pointeur vers la nouvelle structure dog_t,
 *         ou NULL si l'allocation ou la copie échoue
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_copy = malloc(_strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(name_copy, name);
owner_copy = malloc(_strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
_strcpy(owner_copy, owner);
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
