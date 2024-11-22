#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Function that prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: string
 * If a string is NULL, it prints (nil)
 * Any other character is ignored
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
int first = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
if (first)
printf(", ");
if (format[i] == 'c')
printf("%c", va_arg(args, int));
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
}
first = 1;
i++;
}
printf("\n");
va_end(args);
}
