#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of
 * a listint_t linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *Temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(Temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!Temp || !(Temp->next))
		return (-1);
		Temp = Temp->next;
		i++;
	}


	current = Temp->next;
	Temp->next = current->next;
	free(current);

	return (1);
}
