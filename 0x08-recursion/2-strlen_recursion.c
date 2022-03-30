#include "main.h"

/**
 * _strlen_recursion - Entry point of the function
 * @s: char pointer parameter
 * Return: void
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
