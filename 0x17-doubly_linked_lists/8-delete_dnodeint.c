#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of
 * a dlistint_t linked list
 *
 * @head: head of the list
 *
 * @index: index of the new node.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hdr1;
	dlistint_t *hdr2;
	unsigned int d;

	hdr1 = *head;

	if (hdr1 != NULL)
		while (hdr1->prev != NULL)
			hdr1 = hdr1->prev;

	d = 0;

	while (hdr1 != NULL)
	{
		if (d == index)
		{
			if (d == 0)
			{
				*head = hdr1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hdr2->next = hdr1->next;

				if (hdr1->next != NULL)
					hdr1->next->prev = hdr2;
			}
			free(hdr1);
			return (1);
		}
		hdr2 = hdr1;
		hdr1 = hdr1->next;
		d++;
	}
	return (-1);
}
