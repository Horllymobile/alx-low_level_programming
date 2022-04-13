#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */

int main(int argc, char **argv)
{
int (*f)(int, int);
int a, b;

if (argc != 4)
{
printf("Error\n");
exit(98);
}


a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);

if (argv[2][1])
{
printf("Error\n");
exit(99);
}

if (f == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", f(a, b));
return (0);
}
