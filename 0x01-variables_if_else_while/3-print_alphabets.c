#include <stdio.h>
/**
 * main - starting point of C program
 * Return: number - 1
 **/
int main(void)
{
long i = 0;
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (; i < 52; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
