#include "main.h"

/**
 * _isa
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
