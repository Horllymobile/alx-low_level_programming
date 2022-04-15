#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * @...: array of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int i, sum = 0;
if (n == 0)
return (0);

va_start(valist, n);
for (i = 0; i < n; i++)
sum += va_arg(valist, unsigned int);
va_end(valist);
return (sum);
}
