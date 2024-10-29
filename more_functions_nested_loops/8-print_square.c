#include "main.h"
/**
 * print_square - draws a square on the terminal
 * @size: size of the square
 */
void print_square(int size)
{
int i, a;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (a = 0; aa < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
