#include <stdio.h>

/**
 * main - the program print all argument it received.
 * @argc: argument count
 * @argv: arguments array
 * Return: int
 **/

int main(int argc, char *argv[])
{
int i;
i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
