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
int result;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
result = 1;
else
result = 0;
}
return result
}
