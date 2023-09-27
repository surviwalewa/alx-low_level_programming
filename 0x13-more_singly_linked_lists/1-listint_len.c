#include "lists.h"

/**
 * listint_len - prog that returns the numb of ele in a linked lists
 * @h: type listint_t to traverse
 *
 * Return: numb of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
