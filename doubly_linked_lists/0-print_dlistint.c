#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
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
		int div = 1;

		char str[12];
		int i = 0;
		while (num != 0)
		{
			str[i++] = num % 10 + '0';
			num /= 10;
		}
		for (i--; i >= 0; i--)
		{
			_putchar(str[i]);
		}

		_putchar('\n');
		count++;
		h = h->next;
	}

	return (count);
}
