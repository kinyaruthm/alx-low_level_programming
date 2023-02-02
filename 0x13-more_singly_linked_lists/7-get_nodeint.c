#include  "lists.h"

/**
 * get_nodeint_at_index - locates a given node in the list
 * @head: a pointer to the head of the listint_t list
 * @index: the index of the node to locate
 * Return: if node does not exist - NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
