#include <stdio.h>
/**
 * main - Prints number from 1 to 100 with FizzBuzz substitution
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
lse
printf("%d", i);
if (i < 100)  // Add space only if it's not the last number
printf(" ");
}
printf("\n");
return (0);
}
