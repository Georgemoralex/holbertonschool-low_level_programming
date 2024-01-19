#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @Nhead: singly linked list.
 * Return: number of elements in the list.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int newTotal = 0;

	if (b = NULL || b > 1)
		return (0);
	while(b != '\0')
	{
		newTotal = (newTotal * 2) + *b;
		b++;
	}
	return (newTotal);
}
