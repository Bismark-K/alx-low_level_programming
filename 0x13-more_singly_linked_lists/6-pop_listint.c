#include "lists.h"

/**
 * pop_listint - removes the head of the node
 * @head: the first node's pointer
 *
 * Return: the data of the head
 * Author: dz1dzor
 */
int pop_listint(listint_t **head)
{
	listint_t *nxt, *tmp;
	int fnd;

	if (*head == NULL)
		return (0);

	tmp = *head;
	nxt = tmp->nxt;
	fnd = tmp->n;

	free(tmp);
	*head = nxt;

	return (fnd);
}

