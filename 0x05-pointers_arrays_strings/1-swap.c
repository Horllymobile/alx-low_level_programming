#include "main.h"

/**
 * swap_int - swap two int
 * @a: first int parameter
 * @b: second int parameter
 * Return: void
 **/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
