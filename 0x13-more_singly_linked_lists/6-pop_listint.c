#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the head address
 * Return: If linked list is empty - 0
 * otherwise - heads node data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
