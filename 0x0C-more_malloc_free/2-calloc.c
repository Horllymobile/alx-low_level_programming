#include "main.h"
/**
 * _calloc - Entry point for calloc
 * @nmemb: Number of elements
 * @size: Size of each element
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
memset(p, 0, nmemb * size);
return (p);
}
