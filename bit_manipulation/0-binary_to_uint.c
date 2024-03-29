#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number.
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int newTotal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b > '1')
		return (0);
		newTotal = (newTotal * 2) + *b - 48;
		b++;
	}
	return (newTotal);
}
