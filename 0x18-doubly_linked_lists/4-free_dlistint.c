#include "lists.h"

/**
 * free_dlistint - sdfgdfg
 * @head: asddsf
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
