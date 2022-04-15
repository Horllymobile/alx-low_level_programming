#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator parameter
 * @n: number of arguments
 * @...: array of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;

va_start(valist, n);
for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(valist);
printf("\n");
}
