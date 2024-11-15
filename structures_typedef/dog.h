#include <stdio.h>
#include "chien.h"
/**
 * main - affiche le nom et l'âge du chien
 *
 * Return: 0 si tout fonctionne correctement.
 */
int main(void)
{
	chien mon_chien;
	mon_chien.age = 5.5;
	mon_chien.name = "paul";
	mon_chien.owner = "panda";
	printf("My name is %s, and I am %.1f :) - Woof!\n", mon_chien.name,
	mon_chien.age);
return (0);
}
