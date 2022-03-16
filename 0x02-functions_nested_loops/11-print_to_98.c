#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that print from a given number to 98
 * @c: an int parameter of the starting number
 * Return: void
 **/
void print_to_98(int c)
{
if (c > 98)
for (; c > 98; c--)
printf("%d, ", c);
else if (c < 98)
for (; c < 98; c++)
printf("%d, ", c);
printf("%d\n", c);
}
