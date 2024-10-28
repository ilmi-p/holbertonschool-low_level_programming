#include "main.h"
/**
 * _isupper - vérifie si le caractère c est une lettre majuscule
 * @c: le caractère à vérifier
 *
 * Return: 1 si c est une lettre majuscule, sinon 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
