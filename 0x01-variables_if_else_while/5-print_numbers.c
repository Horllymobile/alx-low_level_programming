#include <stdio.h>
/**
* main - starting point of C program
* Return: number - 1
**/
int main(void)
{
int i = 0;
char nums[] = "0123456789";
for (; i < 10; i++)
{
putchar(nums[i]);
}
putchar('\n');
return (0);
}
