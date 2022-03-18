#include "main.h"

/**
 * print_most_numbers - print number except 2 and 4
 * Return: void
 **/
void print_most_numbers(void)
{
int i;
i = 48;
while (i < 57)
{
if (i == 50 || i == 52)
{
continue;
}
_putchar(i);
i++;
}
_putchar('\n');
}
