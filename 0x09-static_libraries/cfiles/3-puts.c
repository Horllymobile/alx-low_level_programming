#include "main.h"

/**
 * _puts -A Function that prints a string followd by a new line to stdout.
 * @str: string parameter
 * Return: void
 **/
void _puts(char *str)
{
int len;
len = 0;

while (*(str + len) != '\0')
{
_putchar(*(str + len));
len++;
}
_putchar('\n');
}
