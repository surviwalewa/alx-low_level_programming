#include "lists.h"

/**
 * free_listint_safe -funct that frees a ll
 * @h: pointer to the first node in the ll
 *
 * Return: num of elements in d freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lengt = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lengt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lengt++;
			break;
		}
	}

	*h = NULL;

	return (lengt);
}
