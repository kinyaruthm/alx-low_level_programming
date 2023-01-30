#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements ata a list_t list
 * @n: The list_t list
 * Return: number pof nodes in n
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
