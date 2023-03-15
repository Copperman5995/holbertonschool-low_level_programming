#include "main.h"
/**
 * print_list - pritns a list
 * @h: the lsit that will be printed
 * Return: retruns the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	while (h != NULL)
	{
		printf("%d", h -> str);
		h = h -> next;
		i++;
	}
	return (i);

}
