#include "lists.h"
/**
 * free-dlistint - sdfgdfg
 * @head: sdfdfgd
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
