#include "lists.h"

/**
 * print_listint - this prints all elements of the list
 * @h: the first node's pointer
 *
 * Return: the counts of nodes
 * Author: dz1dzor
 */
size_t print_listint(const listint_t *h)
{
	size_t nd_cnt;

	nd_cnt = 1;
	if (h == NULL)
		return (0);

	for (; h->next != NULL; nd_cnt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	printf("%d\n", h->n);

	return (nd_cnt);
}

