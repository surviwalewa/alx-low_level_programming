#include "lists.h"

/**
 * sum_listint -func that calc d sum of all d data in a listint_t list
 * @head: first node in d ll
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *temp = head;

	while (temp)
	{
		summ += temp->n;
		temp = temp->next;
	}

	return (summ);
}
