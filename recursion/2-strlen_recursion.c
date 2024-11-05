#include "main.h"
/**
 * _strlen_recursion - Renvoie la longueur d'une chaîne de caractère
 * @s: La chaîne dont on veut connaître la longueur
 *
 * Return: La longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
