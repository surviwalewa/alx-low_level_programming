#include "lists.h"

/**
 * reverse_listint - func that reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *nex = NULL;

	while (*head)
	{
		nex = (*head)->nex;
		(*head)->nex = pre;
		pre = *head;
		*head = nex;
	}

	*head = pre;

	return (*head);
}
