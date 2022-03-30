#include "main.h"

/**
 * _pow_recursion - Entry point of the function
 * @x: int parameter
 * @y: int parameter
 * Return: int
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
