#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers.
*
* Description: This program prints the digits from 0 to 9,
* separated by a comma and a space, and ends with a newline.
*
* Return: Always 0 (Success).
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{ putchar(num + '0');
if (num != 9)
{putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
