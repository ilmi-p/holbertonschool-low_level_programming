#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int found_num = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
continue;
if (s[i] >= '0' && s[i] <= '9')
{
found_num = 1;
result = result * 10 + (s[i] - '0');
}
else if (found_num)
break;
i++;
}
return (result * sign);
}
