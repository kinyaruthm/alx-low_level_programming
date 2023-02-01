#include "lists.h"
#include <stdlib.h>

/**
 * add_nodelist - adds a new node at the beginning of list
 * @head: a pointer to the addresss of the head
 * @n: integer of the new node
 * Return: if function fails - NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
