#include "lists.h"
/**
 * get_dnodeint_at_index - sdfdgs
 * @head: sdfgdfg
 * @index: sdfgsdfg
 * Return: sdfgdfsg
 */

dlistin_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
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
