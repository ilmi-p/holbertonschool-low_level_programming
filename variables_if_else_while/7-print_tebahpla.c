#include <stdio.h>
int main(void)
/**
* main - Entry point of the program
*
* Description: This program prints the alphabet in reverse order
* from 'z' to 'a', followed by a new line. Each letter is printed
* using the putchar function.
*
* Return: Always 0 (Success)
*/
{
int Alphabet;
for (Alphabet = 'z'; Alphabet >= 'a'; Alphabet--)
putchar(Alphabet);
putchar('\n');
return (0);
}
