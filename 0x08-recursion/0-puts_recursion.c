#include "main.h"
/**
* _puts_recursion - Entry point of the function
* @s: char pointer parameter
* Return: void
**/

void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
