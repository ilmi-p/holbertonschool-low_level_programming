#include <stdio.h>
#include <stdarg.h>
/*
 * Betty commentary:
 * This function prints numbers followed by a new line. The numbers are
 * separated by the specified separator, if provided. If separator is NULL,
 * it is not printed. The function uses variadic arguments to accept any
 * number of integers to be printed.
 */
#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
