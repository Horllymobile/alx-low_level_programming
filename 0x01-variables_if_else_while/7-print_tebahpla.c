#include <stdio.h>
/**
* main - starting point of C program
* Return: number - 1
0;276;0c **/
int main(void)
{
int i = 26;
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
for (; i > -1; i--)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
