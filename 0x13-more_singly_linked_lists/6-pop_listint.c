#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node's data,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *Temp;
	int number;

	if (!head || !*head)
	return (0);

	number = (*head)->n;
	Temp = (*head)->next;
	free(*head);
	*head = Temp;

	return (number);
}
