#include "lists.h"
/**
 * listint_len - sdfgds
 * @h: sdfgs
 * Return: sdfgsd
 */

size_t listint_len(cosnt listint_t *h)
{
	const listint_t *temp = h;
	int numnode = 0;

	while (temp)
	{
		numnode++;
		temp = temp->next;
	}

	return (numnode);
}

