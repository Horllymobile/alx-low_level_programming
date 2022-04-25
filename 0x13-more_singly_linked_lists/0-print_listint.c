#include "lists.h"

/**
 * print_listint - print linked list
 *
 * @h: list header
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
int total = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
total += 1;
}
return total;
}
