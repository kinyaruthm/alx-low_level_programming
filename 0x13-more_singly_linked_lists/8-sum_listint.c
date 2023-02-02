#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: a pointer to the head
 * Return: o if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
