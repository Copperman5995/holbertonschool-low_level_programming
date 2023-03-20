#include "lists.h"
/**
 * add_nodeint - sdfgds
 * @head: adfgds
 * @n: asdfgas
 * Return: adsf
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNN = malloc(sizeof(*newNN));

	if (!newNN)
	{
		return (NULL);
	}

	newNN->n = n;
	newNN->next = temp;
	*head = newNN;

	return (newNN);
}
