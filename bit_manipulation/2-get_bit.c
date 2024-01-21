#include "main.h"

/**
 * get_bit - prints specific bit given an index
 * @n: bin number
 * @index: index to print
 * Return: value of bit at index or negative value if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
