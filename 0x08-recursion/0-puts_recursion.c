#include "main.h"
/**
* _puts_recursion - Entry point of the function
* @s: char pointer parameter
* Return: void
**/
void _puts_recursion(char *s)
{
int i;
i = 0;
if (*(s + i) != '\0')
{
_putchar(s[i]);
i++;
_puts_recursion(s + i);
if (s[i] == '\0')
{
_putchar('\n');
}
}
}
