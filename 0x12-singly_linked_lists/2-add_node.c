#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t nchar;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	temp->len = nchar;
	temp->next = *head;
	*head = temp;
	return (*head);
}
