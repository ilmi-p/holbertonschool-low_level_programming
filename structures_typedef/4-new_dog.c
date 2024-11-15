#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL if it fails.
 */
int my_strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
return length;
}
char *my_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
if (name == NULL || owner == NULL)
return (NULL);
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_copy = malloc(my_strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
my_strcpy(name_copy, name);
owner_copy = malloc(my_strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
my_strcpy(owner_copy, owner);
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
