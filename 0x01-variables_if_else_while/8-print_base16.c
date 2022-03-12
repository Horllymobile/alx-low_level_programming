#include <stdio.h>
/**
 * main - starting point of C program
 * Return: number - 1
 **/
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
