#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all the data
 * of a linked list
 * @head: pointer
 * Return: sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
