#include <stdio.h>
#include "dog.h"
/**
 * main - affiche le nom et l'âge du chien
 *
 * Return: 0 si tout fonctionne correctement.
 */
int main(void)
{
dog my_dog;
	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
