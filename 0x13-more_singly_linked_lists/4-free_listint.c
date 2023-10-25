#include "lists.h"

/**
 * free_listint - this function frees the list
 * @head: the first node's pointer
 *
 * Return: Nothing
 * Author:dz1dzor
 */
void free_listint(listint_t *head)
{
	listint_t = crt;

	while ((crt = head) != NULL)
	{
		head = head->next;

		free(crt);
	}
}

