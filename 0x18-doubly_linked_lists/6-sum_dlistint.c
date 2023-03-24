#include "lists.h"
/**
 * sum_dlistint - sdfgdsfg
 * @head: sdfgsdfg
 * Return: sdfgsdfg
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp ->next;
	}

	return (sum);
}
