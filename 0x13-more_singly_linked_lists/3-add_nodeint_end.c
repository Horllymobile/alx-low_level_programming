#include "lists.h"

/**
 * add_nodeint_end - add node to the end of linked list
 * @head: head param
 * @n: data param for the new node
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current = *head;
listint_t *newNode = (listint_t *)(malloc(sizeof(listint_t)));

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = newNode;
}
return (newNode);
}
