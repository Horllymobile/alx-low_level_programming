#include "main.h"

/**
 * _memset - Entry point
 * @s: pointer parameter
 * @b: char parameter
 * @n: unsigned int parameter
 * Return: char
**/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
