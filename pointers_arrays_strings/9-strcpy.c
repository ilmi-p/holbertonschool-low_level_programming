#include "main.h"
#include <stdio.h>
#include <string.h>
char *_strcpy(char *dest, char *src)
{
strcpy(dest,src);
printf("%s\n", dest);
return (dest);   
}
