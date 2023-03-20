#include "lists.h"
/**
 * print_listint - sdfg
 * @h: sdfgsd
 * Return: sdgsdfg
 */

size_t print_listint(const listint_t *h)
{
	const listint_ *temp = h;

	int numnode = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		numnode++;
	}

	return (numnode);
}
