#include "lists.h"

/**
 * add_dnodeint - asdfgds
 * @head: asdfds
 * @n: asdfsdf
 * Return: sdfgd
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newNodeBegin = malloc(sizeof(*newNodeBegin));

	if (!newNodeBegin)
	{
		return (NULL);
	}

	newNodeBegin->n = n;
	newNodeBegin->next = temp;
	newNodeBegin->prev = NULL;
	*head = newNodeBegin;

	return (newNodeBegin);
}
