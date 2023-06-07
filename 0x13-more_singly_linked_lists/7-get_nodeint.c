#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a linked list
 * @head: pointer
 * @index: index
 * Return: pointer or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
