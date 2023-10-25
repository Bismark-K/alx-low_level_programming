#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of the list
 * @head: the first node's pointer
 *
 * Return: the total sum
 * Author: dz1dzor
 */
int sum_listint(listint_t *head)
{
	int total;

	total = 0;
	while (head != NULL)
	{
		total = total head->n;
		head = head->next;
	}

	return (total);
}

