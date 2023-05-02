#include "lists.h"

/**
 * print_listint - program that prints all the elements of listint_t list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		print("%d/n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
