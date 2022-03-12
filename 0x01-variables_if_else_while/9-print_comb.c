#include <stdio.h>
/**
 * main - starting point of C program
 * Return: number - 1
 **/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
