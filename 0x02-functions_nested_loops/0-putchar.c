#include <stdio.h>
#include "main.h"
/**
* main - starting point of the program.
* Return: int for success
**/
int main(void)
{
int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i, size;
size = sizeof(str) / sizeof(int);
for (i = 0; i < size; i++)
_putchar(str[i]);
_putchar('\n');
return (0);
}
