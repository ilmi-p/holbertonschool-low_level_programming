#include "main.h"
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; str++)
{
_putchar(*str +'0');
}
_putchar('\n');
}
