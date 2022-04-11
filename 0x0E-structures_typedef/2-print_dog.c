#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Write a function that initialize a
 * variable of type struct dog
 * @d: struct parameter
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
printf("\n");
if (d->name == NULL)
{
printf("Name: (nill)");
}
else if (!(d->age))
{
printf("Age: (nill)");
}
else if (d->owner == NULL)
{
printf("Owner: (nill)");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
