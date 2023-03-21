#include "lists.h"
/**
 * free_listint - sdgsdg
 * @head: adfgsdf
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

