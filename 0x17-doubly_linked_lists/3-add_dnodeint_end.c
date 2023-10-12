#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: head of the list
 *
 * @n: value of the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hdr;
	dlistint_t *new_N;

	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
		return (NULL);

	new_N->n = n;
	new_N->next = NULL;

	hdr = *head;

	if (hdr != NULL)
	{
		while (hdr->next != NULL)
			hdr = h->next;
		hdr->next = new_N;
	}
	else
	{
		*head = new_N;
	}

	new_N->prev = hdr;

	return (new_N);
}
