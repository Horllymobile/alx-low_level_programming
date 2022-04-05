#include "main.h"
/**
 * create_array - Entry point
 * @size: size of array
 * @c: character to fill array
 * Return: array of char
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

for (i = 0; i < size; i++)
array[i] = c;
free(array);
return (array);
}
