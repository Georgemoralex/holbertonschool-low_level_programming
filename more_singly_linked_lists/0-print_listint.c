#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @head: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *head)
{
	size_t Qty_nodes = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		Qty_nodes++;
	}
	return (Qty_nodes);
}
