#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		int num = h->n;
		if (num < 0)
		{
			putchar('-');
			num = -num;
		}
		if (num / 10)
			print_number(num / 10);
		_putchar(num % 10 + '0');
		_putchar('\n');
		count++;
		h = h->next;
	}

	return (count);
}