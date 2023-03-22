#include "lists.h"
/**
 * dlistint_len - sdfgsdfg
 * @h: asdfgs
 * Return: addfg
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int numNode = 0;

	while (temp)
	{
		numNode++;
		temp = temp->next;
	}

	return (numNode);
}
