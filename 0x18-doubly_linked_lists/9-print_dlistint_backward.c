#include "lists.h"
/**
 * print_dlistint_backward - sdfgsdfg
 * @h: sdfgsdfg
 * Return: sdfgsdg
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t numNode = 0;

	if (!temp)
	{
		return (0);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
		numNode++;
	}

	return (numNode);
}
