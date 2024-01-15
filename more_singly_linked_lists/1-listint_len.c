#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @head: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *head)
{
	size_t Qty_nodes = 0;

	while (head != NULL)
	{
		head = head->next;
		Qty_nodes++;
	}
	return (Qty_nodes);
}
