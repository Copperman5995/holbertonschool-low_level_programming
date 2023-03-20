#include "lists.h"
/**
 * add_nodeint_end - adfgsdfg
 * @head: dfgs
 * @n: sdfgs
 * Return: sdfgds
 */

listint_t *add_nodeint_end(listt_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNN = malloc(sizeof(newNN));

	if (!newNN)
	{
		return (NULL);
	}

	newNN->n = n;
	newNN->next = NULL;

	if (!*head)
	{
		*head = newNN;
		return (newNN);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newNN;

	return (newNN);
}


