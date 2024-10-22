#include <stdio.h>
/**
* main - Prints the lowercase alphabet followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
putchar(lettre);
}
putchar('\n');
return (0);
}
