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

	nd_cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nd_cnt++;
	}

	return (nd_cnt);
}

