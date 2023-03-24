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
	dlistint_t *delNode;
	unsigned int indexDel = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}

	while (temp && indexDel < index - 1)
	{
		if (indexDel == index - 1)
			break;

		temp = temp->next;
		indexDel++;
	}

	if (!temp)
		return (-1);

	delNode = temp->next;
	temp->next = temp->next->next;
	if (delNode->next)
		delNode->next->prev = temp;
	free(delNode);
	return (1);
}
