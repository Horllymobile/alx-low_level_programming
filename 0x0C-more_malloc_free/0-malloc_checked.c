#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: unsigned int parameter
 * Return: return void
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
printf("L%d: Failed to allocate memory\n", __LINE__);
exit(98);
}
return (p);
}
