#include "lists.h"
/**
 * print_list - pritns a list
 * @h: the lsit that will be printed
 * Return: retruns the number of nodes
 */

size_t print_list(const list_t *h)
{ 
	int num = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (!(temp->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", temp->len, temp->str);
		}
		num++;		
		temp = temp->next;
		
	}
	return (num);

}
