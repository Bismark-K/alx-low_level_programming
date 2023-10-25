#include "lists.h"

/**
 * free_listint2 - frees the lists and changes head to NULL
 * @head: the first node's pointer
 *
 * Return: nothing
 * Author: dz1dzor
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *crt;

	if (head != NULL)
	{
		crt = *head;

		while ((tmp = crt) != NULL)
		{
			crt = crt->next;

			free(tmp);
		}

		*head = NULL;
	}
}

