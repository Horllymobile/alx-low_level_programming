#include "main.h"
/**
 * array_range - Entry point of array_range
 * @min: minimum value
 * @max: maximum value
 * Return: int*
 */
int *array_range(int min, int max)
{
int *array;
int i;
int size;

if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = min + i;
return (array);
}
