#include "lists.h"

/**
 * get_nodeint_at_index - function that gets node at nth index from a list
 * @head: the first node's pointer
 * @index: counts of the accessible nodes
 *
 * Return: NULL, if node does not exist, nide at nth index
 * Author: dz1dzor
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;

	ind = 0;
	while (head != NULL && ind < index)
	{
		head = head->next;
		ind++;
	}

	return (head);
}

