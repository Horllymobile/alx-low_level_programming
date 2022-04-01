#include "main.h"
/**
 * *_memcpy - Entry pont of memory copy
 * @dest: char pointer parameter 1
 * @src: char pointer parameter 2
 * @n: int n time
 * Return: char dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
