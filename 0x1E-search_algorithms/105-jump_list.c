#include "search_algos.h"

/**
 * jump_list - searches for an algorithm in a sorted singly linked list of
 *			integers using jump search.
 * @list: the pointer to the  head of the linked list.
 * @size: the total number of nodes in the list.
 * @value: the value to search.
 * Return: NULL, if the value is not present or the head of the list is NULL.
 *         Otherwise, a pointer to the first node where the value is found.
 *
 * Author: Bismark-K
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp;
	listint_t *nd, *jmp;
	size_t stp_sz;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	stp_sz = sqrt(size);
	for (nd = jmp = list; jmp->index + 1 < size && jmp->n < value;)
	{
		nd = jmp;
		for (stp += stp_sz; jmp->index < stp; jmp = jmp->next)
		{
			if (jmp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jmp->index, jmp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, jmp->index);

	for (; nd->index < jmp->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
