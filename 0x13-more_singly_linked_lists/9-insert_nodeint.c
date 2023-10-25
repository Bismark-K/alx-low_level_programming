#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given place
 * @head: the first node's pointer
 * @n: element to add
 * @idx: index int the list where the node is to be placed
 *
 * Return: address of the new node, NULL if it fails
 * Author: dz1dzor
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *crt, *nd_new;

	crt = *head;
	nd_new = malloc(sizeof(listint_t));
	if (nd_new == NULL || (idx != 0 && *head == NULL))
		return (NULL);

	nd_new->n = n;
	for (i = 0; i < idx - 1 && head != NULL; i++)
	{
		crt = crt->next;
		if (crt == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		nd_new->next = *head;
		*head = nd_new;
	}
	else if (crt->next)
	{
		nd_new->next = crt->next;
		crt->next = nd_new;
	}
	else
	{
		nd_new->next = NULL;
		crt->next = nd_new;
	}

	return (nd_new);
}

