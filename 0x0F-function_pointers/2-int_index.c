#include "function_pointers.h"

/**
 * int_index - Entry point of int_index
 * @array: array of integers
 * @size: size of array
 * @cmp:   pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
if (cmp(array[i]) != 0)
return (i);
return (-1);
}
