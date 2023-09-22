#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prog that returns the num of elements in a linked ls
 * @h: pointer to the list_t list
 *
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
