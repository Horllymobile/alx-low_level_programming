#include "lists.h"

/**
 * add_nodeint - add node to the head of a linked list
 * @head: head of the list
 * @n: new node data parameter
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
int num;

num = n;

newNode = (listint_t *)malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);
newNode->n = num;
newNode->next = *head;
*head = newNode;
return (newNode);
}
