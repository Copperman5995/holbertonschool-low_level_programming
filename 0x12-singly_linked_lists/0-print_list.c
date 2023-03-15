#include "lists.h"
/**
 * print_list - pritns a list
 * @h: the lsit that will be printed
 * Return: retruns the number of nodes
 */

size_t print_list(const list_t *h)
{ 
	int num = 0;

	while (h != NULL)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);

}
