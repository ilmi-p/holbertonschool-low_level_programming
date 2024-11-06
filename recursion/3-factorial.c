#include <stdio.h>
/**
* factorial - calculates the factorial of a given integer n
* @n: the integer for which the factorial is calculated
*
* Return: the factorial of n; if n is lower than 0, returns -1 to indicate
* an error
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
