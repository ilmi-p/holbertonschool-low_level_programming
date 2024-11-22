#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print_type - Struct to hold a format character and its associated function.
 * @format_char: The format character (e.g., 'c', 'i', 'f', 's').
 * @print_func: Pointer to the function that prints the corresponding argument type.
 */
typedef struct {
char format_char;
void (*print_func)(va_list);
} print_type;

/**
 * print_char - Prints a character.
 * @args: List of arguments.
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer.
 * @args: List of arguments.
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: List of arguments.
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: List of arguments.
 * If the string is NULL, it prints "(nil)" instead.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
}
/**
 * print_all - Function that prints anything based on the format.
 * @format: List of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: string
 * Any other character is ignored.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
int first = 0;
print_type types[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string}
};
va_start(args, format);
while (format && format[i])
{
unsigned int j = 0;
while (j < 4)
{
if (format[i] == types[j].format_char)
{
if (first)
printf(", ");
types[j].print_func(args);
first = 1;
break;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
