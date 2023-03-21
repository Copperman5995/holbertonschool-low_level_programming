#include "lists.h"
/**
 * get_nodeint_at_index - asdfgsdfg
 * @head: adfgsdfg
 * @index: asdfgas
 * Return: sdfgsdfg
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int indexPrint = 0;

	while (temp)
	{
		if (indexPrint == index)
		{
			return (temp);
		}
		temp = temp->next;
		indexPrint++;
	}
	return (NULL);
}

