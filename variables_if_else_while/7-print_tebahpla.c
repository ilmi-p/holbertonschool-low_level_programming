#include <stdio.h>
int main(void)
/* Write a program that prints the lowercase alphabet in reverse, followed by a new line. */
{
int Alphabet;
for (Alphabet = 'z'; Alphabet >= 'a'; Alphabet--)
putchar(Alphabet);
putchar('\n');
return (0);
}
