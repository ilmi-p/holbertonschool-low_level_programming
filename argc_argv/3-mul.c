#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers and prints the result.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the arguments.
 *
 * Return: 0 if successful, 1 if error (not exactly 2 arguments).
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
printf("%d\n", num1 * num2);
return (0);
}
