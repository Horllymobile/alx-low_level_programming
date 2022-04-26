#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of the list
 * Return: void
 **/
void free_listint(listint_t *head)
{
listint_t *temp = head;
if (head == NULL)
return;
while (head->next != NULL)
{
temp = head;
head = head->next;
free(temp);
}
free(head);
}
