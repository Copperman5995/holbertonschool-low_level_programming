#include "lists.h"
/**
 * print_dlistint_backward - sdfgsdfg
 * @h: sdfgsdfg
 * Return: sdfgsdg
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int numNode = 0;

	while (temp)
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
