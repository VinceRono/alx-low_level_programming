#include "lists_h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in linked list
 *
 * Return: the data inside the elements deleted
 *
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
