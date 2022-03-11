#include <stdio.h>
/**
* main - starting point of C program
* Return: number - 1
**/
int main(void)
{
int i = 0;
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
for (; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
