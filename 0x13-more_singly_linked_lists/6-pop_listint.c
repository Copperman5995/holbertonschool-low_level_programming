#include "lists.h"
/**
 * pop_listint - dfgsd
 * @head: asfgdsf
 * Return: adsgs
 */

int pop_listint(listint_t **head)
{
	listint_t *delHead;
	int n = 0;

	if (*head != NULL)
	{
		delHead = (*head)->next;
		n =(*head)->n;
		free(*head);
		*head = delHead;
	}

	return (n);
}

