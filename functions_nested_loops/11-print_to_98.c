#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers from n to 98, followed by a new line
* @n: The starting integer.
*
* Description: This function takes an integer n and prints all numbers from n
* to 98. If n is less than 98, it increments up to 98. If n is greater than 98,
* it decrements down to 98.
*
* Return: void (no return value)
*/
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n < 98)
{
n++;
}
else
{
n--;
}
}
printf("%d\n", n);
}
