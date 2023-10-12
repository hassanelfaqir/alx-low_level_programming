#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: head of the list
 *
 * @n: value of the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_N;
	dlistint_t *hdr;

	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
		return (NULL);

	new_N->n = n;
	new_N->prev = NULL;
	hdr = *head;

	if (hdr != NULL)
	{
		while (hdr->prev != NULL)
			hdr = h->prev;
	}
	new_N->next = hdr;

	if (hdr != NULL)
		h->prev = new_N;

	*head = new_N;

	return (new_N);
}
