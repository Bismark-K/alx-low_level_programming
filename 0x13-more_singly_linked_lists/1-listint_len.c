#include "lists.h"

/**
 * listint_len - this function returns the counts of elements in the list
 * @h: linked list
 *
 * Return: counts of elements
 * Author: dz1dzor
 */
size_t listint_len(const listint_t *h)
{
	size_t el_cnt;

	if (h == NULL)
		return (0);

	el_cnt = 1;
	for (; h->next != NULL;)
	{
		if (h->n != '\0')
			el_cnt++;

		h = h->next;
	}

	return (el_cnt);
}

