#include <stdio.h>
/**
 * main - starting point of C program
 * Return: number - 1
 **/
int main(void)
{
int i = 0;
while (i <= 9)
{
  fputc(i);
i++;
}
putchar('\n');
return (0);
}
