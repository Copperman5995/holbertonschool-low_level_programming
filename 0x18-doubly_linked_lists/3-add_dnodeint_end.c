#include "lists.h"

/**
 * add_dnodeint_end - sdfgdfgdf
 * @head: asdffds
 * @n: sdfdsf
 * Return: sdfgd
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newNodeEnd = malloc(sizeof(newNodeEnd));

	if (!newNodeEnd)
	{
		return (NULL);
	}

	newNodeEnd->n = n;
	newNodeEnd->next = NULL;

	if (!*head)
	{
		*head = newNodeEnd;
		return (newNodeEnd);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	newNodeEnd->next = NULL;
	newNodeEnd->prev = temp;
	return (newNodeEnd);
}
