#include <stdio.h>
/**
* main - starting point of C program
* Return: number - 1
**/
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
