#include "lists.h"
/**
 * delete_nodeint_at_index - asdfgds
 * @head: asdfgsd
 * @index: asdfga
 * Return: dfgsd
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *delNode;
	unsigned int indexDel = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		delNode = *head;
		*head -= (*head)->next;
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

	nodeDel = temp->next;
	temp->next = temp->next->next;
	free(nodeDel);
	return (1);
}
