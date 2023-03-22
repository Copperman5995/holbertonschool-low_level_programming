#include "lists.h"
/**
 * add-dnodeint - sdfgsdg
 * @head: sdfgdfg
 * @n: sdfgdg
 * Return: sdfgdfg
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
