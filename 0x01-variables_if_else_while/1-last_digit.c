#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - starting point of the program
 * Return: number 0
**/
int main(void)
{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
l = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l < 6 && l != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, l);
}
return (0);
}
