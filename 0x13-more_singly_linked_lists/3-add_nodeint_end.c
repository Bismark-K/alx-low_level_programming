#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the node
 * @head: first node's pointer
 * @n: the expected int element to add to new node
 *
 * Return: new element's address or if it fails, NULL
 * Author: dz1dzor
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint *tmp, *nd_new;

	nd_new = malloc(sizeof(listint_t));
	if (nd_new == NULL)
		return (NULL);

	nd_new->n = n;
	nd_new->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = nd_new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = nd_new;
	}

	return (*head);
}

