#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function that print all alphabets in lower case
 * Return: void
 **/
void print_alphabet_x10(void)
{
int count = 0;
int alpha;
while (count <= 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
}
}
