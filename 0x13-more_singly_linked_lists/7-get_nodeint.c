#include "lists.h"

/**
 * get_nodeint_at_index - prog that returns d node at a certain index in a ll
 * @head: first node in d ll
 * @index: index of d node to return
 *
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h = 0;
	listint_t *temp = head;

	while (temp && h < index)
	{
		temp = temp->next;
		h++;
	}

	return (temp ? temp : NULL);
}
