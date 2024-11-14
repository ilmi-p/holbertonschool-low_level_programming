#include "main.h"
#include <stdlib.h>
/*
* _calloc - Allocates memory for an array of nmemb elements of size bytes each and
*           initializes the memory to zero.
* @nmemb: The number of elements in the array.
* @size: The size of each element.
*
* Return: A pointer to the allocated memory, or NULL if failure occurs.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return NULL;
ptr = malloc(nmemb * size);
if (ptr == NULL)
return NULL;
for (unsigned int i = 0; i < nmemb * size; i++)
((char *)ptr)[i] = 0;
return ptr;
}
