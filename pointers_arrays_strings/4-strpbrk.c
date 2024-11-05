#include <unistd.h>
#include <string.h>
/**
 * _strpbrk - Locate the first occurrence in the string s of any of the bytes
 *            in the string accept.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(const char *s, const char *accept);
int main() {
char *s = "hello, world";
char *f = "world";
char *t;
t = _strpbrk(s, f);
if (t)
{
write(STDOUT_FILENO, t, strlen(t));
}
else
{
char *message = "Aucun caract√®re trouv√n©.";
write(STDOUT_FILENO, message, strlen(message));
}
return(0);
}
