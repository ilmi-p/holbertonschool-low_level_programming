#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Calcule la somme de deux nombres
 * @a: Le premier entier
 * @b: Le deuxième entie
 *
 * Return: La somme de a et b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Calcule la différence entre deux nombre
 * @a: Le premier entier
 * @b: Le deuxième entie
 *
 * Return: La différence de a et 
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Calcule le produit de deux nombres
 * @a: Le premier entier
 * @b: Le deuxième entie
 *
 * Return: Le produit de a et b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Calcule la division de deux nombres
 * @a: Le premier entier
 * @b: Le deuxième entie
 *
 * Return: Le résultat de la division de a par 
 *         Quitte le programme avec un code d'erreur si b est égal à
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Calcule le reste de la division de deux nombres
 * @a: Le premier entier
 * @b: Le deuxième entie
 *
 * Return: Le reste de la division de a par b
 *         Quitte le programme avec un code d'erreur si b est égal à
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}