#include "main.h"

/**
 * get_bit - Get the bit object
 * @n: number
 * @index: inded
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int val;

if (index > sizeof(unsigned long int) * 8)
return (-1);

val = (n >> index) & 1;
return (val);
}
