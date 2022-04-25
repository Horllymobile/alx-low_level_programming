#include "lists.h"

/**
 * listint_len - return lenght of a link list
 * @h: head of the list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
int total = 0;

while (h != NULL)
{
h = h->next;
total += 1;
}
return (total);
}
