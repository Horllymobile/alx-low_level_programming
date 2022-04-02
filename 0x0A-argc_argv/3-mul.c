#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two number
 * @argc: argument size in int
 * @argv: argument names in string
 * Return: 0
 **/

int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error\n");
}
else
{
printf("%d\n", (atoi(*(argv + 1)) * atoi(*(argv + 2))));
return (0);
}
return (1);
}
