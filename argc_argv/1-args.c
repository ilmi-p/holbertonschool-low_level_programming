#include <stdio.h>
/**
 * main - Prints the number of arguments passed to the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings representing the arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("le num de ar est de : %d\n", argc -1);
return (0);
}
