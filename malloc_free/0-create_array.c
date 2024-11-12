#include <stdlib.h>
/**
 * create_array - crée un tableau d'une taille donnée et le remplit avec u
 * caractère spécifique.
 * @size: La taille du tableau à crée
 * @c: Le caractère à remplir dans le tablea
 *
 * Return: Un pointeur vers le tableau créé, ou NULL si l'allocation éch
 * ou si la taille est 0.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
