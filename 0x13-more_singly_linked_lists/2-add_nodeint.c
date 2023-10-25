#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: the first node's pointer
 * @n: integer to add inside of the new node
 *
 * Return: new element's address, if success and NULL, if failure
 * Author: dz1dzor
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd_new;

	nd_new = malloc(sizeof(listint_t));
	if (nd_new == NULL)
		return (NULL);

	if (*head == NULL)
		nd_new->next = NULL;
	else
		nd_new->next = *head;

	nd_new->n = n;
	*head = nd_new;

	return (*head);
}

