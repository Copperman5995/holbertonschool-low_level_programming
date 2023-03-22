#include "lists.h"
/**
 * print_dlistint - dgsdfg
 * @h: adsfg
 * Return: sdfgsd
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;

	int numNode = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		numNode++;
	}

	return (numNode);
}
