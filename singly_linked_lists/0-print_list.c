#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *Nhead)
{
	size_t elements;

	elements = 0;
	while (Nhead != NULL)
	{
		if (Nhead->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", Nhead->len, Nhead->str);
		Nhead = Nhead->next;
		elements++;
	}
	return (elements);
}
