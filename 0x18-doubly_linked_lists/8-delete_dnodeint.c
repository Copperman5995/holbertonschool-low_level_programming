#include "lists.h"
/**
 * delete_dnodeint_at_index - sdfgsdg
 * @head: sdfgsdfg
 * @index: sdfgsdfg
 * Return: sdfgsd
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	slistint_t *delNode;
	unsigned int indexDel = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		delNode = *head;
		*head = (*head)->next;
		free(delNode);
		return (1);
	}

	while (temp && index != 0)
	{
		if (indexDel == index - 1)
		{
			break;
		}

		temp = temp->next;
		indexDel++;
	}

	if (!temp)
	{
		return (-1);
	}

	delNode = temp->next;
	temp->next = temp->next->next;
	free(delNode);
	return (1);
}
