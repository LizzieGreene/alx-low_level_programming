#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: A pointer to the first element in the linked list
 *
 * Return: Data in element deleted, 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
