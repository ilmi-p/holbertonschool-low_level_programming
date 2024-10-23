#include <stdio.h>
int main(void)
{
int base;
for (base = 0; base < 10; base++)
putchar(base + '0');
for (base = 'a'; base <= 'f' ; base++)
putchar(base);
putchar('\n');
return (0);
}
