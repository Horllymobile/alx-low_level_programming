#include <stdio.h>
#include "main.h"

/**
 * _islower - Check if alphabets is lower case
 * @c: Character parameterx
 * Return: int
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
