#include "main.h"
#include <stdio.h>
/**
 * factorial - calculates the factorial of a given integer n
 * @n: the integer for which the factorial is calculated
 *
 * Return: the factorial of n; if n is 0, returns 1 as 0! = 1
 */
int factorial(int n)
{
if (n == 0) 
{
return 1;
} else        
return (n * factorial(n - 1));
}
