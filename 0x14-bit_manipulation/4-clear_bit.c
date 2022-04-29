#include "main.h"

/**
 * clear_bit - clear bit function
 * @n: number
 * @index: index of bit
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
*n = *n & ~(1 << index);
return (1);
}
