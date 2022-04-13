#include "function_pointers.h"
/**
 * print_name - entry point
 * @name: char parameter
 * @f: function pointer
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
