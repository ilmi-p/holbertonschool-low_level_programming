#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i;
int result;
for (i = 0; i <= 9; i++)
{
result = 9 * i;
_putchar('0' + result);
_putchar(',');
_putchar('\n');
}
}
