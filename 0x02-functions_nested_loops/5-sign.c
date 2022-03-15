#include "main.h"

/**
 * print_sign - check for lowercase character
 * @n: The number to check for
 *
 * Return: 1 if @n is lowercase otherwise 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (1);
}
}
