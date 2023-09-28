#include "lists.h"

/**
 * pop_listint - prog that deletes the head node of a linked list
 * @head: pointer 2 d first element in d ll
 *
 * Return: the data inside the elements or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
