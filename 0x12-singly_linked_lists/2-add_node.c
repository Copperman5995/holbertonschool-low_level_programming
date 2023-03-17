#include "lists.h"
#include <stdlib.h>
/**
 * add_node - sdfgdfg
 * @head: sdfgsd
 * @str: sdfgs
 * Return: sdfgd
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addnode;

	addnode = malloc(sizeof(list_t));

	if (!addnode)
	{
		free(addnode);
		return (NULL);
	}

	addnode->next = *head;
	*head = addnode;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = addnode->next;
	return (*head);
}
