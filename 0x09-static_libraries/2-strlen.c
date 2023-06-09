
#include "main.h"
#include <stdio.h>

/**
 * _s
 * * @s: string
 * Return: returns the length
 */
int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; i++)
{
s++;
}
return (i);
}
