#include "lists.h"
/**
 * pop_listint - A function that deletes the head note of a linked list
 * @head: pointer
 * Return: data inside element that was deleted
 * or 0 if empty
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
