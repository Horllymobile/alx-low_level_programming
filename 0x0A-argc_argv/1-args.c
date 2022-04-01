#include <stdio.h>

/**
 * main - a program that prints it number of arguments
 * @argc: argument size in int
 * @argv: argument variables in array of char
 * Return: integer
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", (argc - 1));
return (0);
}
