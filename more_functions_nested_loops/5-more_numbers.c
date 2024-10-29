#include "main.h"
/**
* more_numbers - Prints the numbers from 0 to 14 ten times,
* followed by a new line each time.
*/
void more_numbers(void)
{
int i, a;
for (i = 0; i < 10; i++)
{
for (a = 0; a <= 14; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
}
