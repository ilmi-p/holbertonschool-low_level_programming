#include "main.h"
/**
 * factorial - Renvoie le factoriel d'un nombre.
 * @n: Le nombre pour lequel calculer le factoriel.
 *
 * Return: Le factoriel de n, ou -1 si n est inférieur à 0 (erreur)
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
