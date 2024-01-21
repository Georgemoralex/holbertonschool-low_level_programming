#include "main.h"

/**
 * print_binary - converts unsigned long int to binary
 * @n: decimal number
 * Return: converted number.
 */

void print_binary(unsigned long int n)
{
	int length = 0;
	int x, bit;
	unsigned long int temp = n;

	while (temp > 0)
	{
		temp >>= 1;
		length += 1;
	}
	if (length == 0)
	{
		_putchar('0');
	}
	else
	{
		for (x = length - 1; x >= 0; x--)
		{
			bit = (n >> x) & 1;
			_putchar(bit + '0');
		}
	}
}
