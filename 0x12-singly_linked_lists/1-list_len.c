#include "lists.h"
/**
 * list_len - returns the lenght of the list
 * @h: is the list that will be printed.
 * Return: the lenght of the list
 */
size_t list_len(const list_t *h)
{
	int len = 0;
	const list_t *temp = h;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
