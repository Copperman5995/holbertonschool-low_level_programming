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

	newNodeBegin->next = temp;
	newNodeBegin->n = n;
	*head = newNodeBegin;

	return (newNodeBegin);
}
