#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = 9 * j;
if (j == 0)
{
_putchar('0' + result);
}
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
}
_putchar('0' + result);
}
}
_putchar('\n');
}
}
