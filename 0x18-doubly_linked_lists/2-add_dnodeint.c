#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: head of the list
 * @n: data of the node
 * Retrun: address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNodeBegin = malloc(sizeof(*newNodeBegin));
	dlistint_t *temp = *head;

	if (!newNodeBegin)
		return (NULL);

	newNodeBegin->n = n;
	newNodeBegin->prev = NULL;

	if (!temp)
		newNodeBegin->next = NULL;
	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = newNodeBegin;
		newNodeBegin->next = temp;
	}
	*head = newNodeBegin;

	return (newNodeBegin);
}
