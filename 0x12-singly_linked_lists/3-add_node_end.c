#include "lists.h"
/**
 * add_node_end - sdfg
 * @head: asfgd
 * @str: sdfgsdf
 * Return: sdfgdf
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addnode = malloc(sizeof(list_t));
	list_t *temp = *head

	if (!addnode)
		return (NULL);

	addnode->str = strdup(str);
	addnode->len = strlen(str);
	addnode->next = NULL;

	if (*head == NULL)
	{
		*head = addnode;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->temp;
		}
		temp->next = addnode;
	}
	return (addnode);
}

