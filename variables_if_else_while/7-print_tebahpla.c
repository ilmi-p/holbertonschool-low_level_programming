#include <stdio.h>
/**
* main - Entry point
*
* This program prints the alphabet in reverse order
* from 'z' to 'a', followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int Alphabet;
for (Alphabet = 'z'; Alphabet >= 'a'; Alphabet--)
putchar(Alphabet);
putchar('\n');
return (0);
}
