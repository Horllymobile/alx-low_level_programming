#include <stdio.h>
#include "main.h"

/**
 * _islower - Check if alphabets is lower case
 * @c: Character parameterx
 * Return: int
 */
int _islower(int c)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
return (1);
else
return (0);
}
}
