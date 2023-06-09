#include "main.h"
#include <stddef.h>
/**
 * @c: character
 * Return: point to the first occurrence
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
