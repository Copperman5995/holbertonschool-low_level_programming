#include "lists.h"
/**
 * sum_listint - sdfgsdfg
 * @head: asfgdsfg
 * Return: sdfgdsf
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int total = 0;

	while (temp)
	{
		total = total + temp->n;
		temp = temp->next;
	}

	return (total);
}
