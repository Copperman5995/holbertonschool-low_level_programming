#include "lists.h"
/**
 * add_dnodeint _end - sdfgdsf
 * @head: sdfgdf
 * @n: adsfgsdfg
 * Return: sdfgdfgdfg
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

	temp->next = newNodeEnd;
	
	return (newNodeEnd);
}
