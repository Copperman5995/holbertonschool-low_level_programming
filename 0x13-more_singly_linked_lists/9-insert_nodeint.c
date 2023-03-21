#include "lists.h"
/**
 * insert_nodeint_at_index - sdfgsd
 * @head: asdfg
 * @idx: asdfgads
 * @n: asdfgasdg
 * Return: sdfg
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *insertNode = malloc(sizeof(*insertNode));
	unsigned int i = 0;

	if (!insertNode)
	{
		return (NULL);
	}

	insertNode->n = n;

	if (idx == 0)
	{
		insertnode->next = *head;
		*head = insertNode;
		return (insertNode);
	}

	while (temp)
	{
		if (i == idx - 1)
		{
			break;
		}
		i++;
		temp = temp->next;
	}

	if (i < idx - 1)
	{
		return (NULL);
	}

	insertNode->next = temp->next;
	temp->next = insertNode;

	return (insertNode);
}
