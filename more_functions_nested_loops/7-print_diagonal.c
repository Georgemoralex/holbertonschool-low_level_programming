#include "main.h"
/**
*print_diagonal - function to print a backslash
*Description: print a backslash times n
*@n: number to print backslash
*/
void print_diagonal(int n)
{
	int i;
	int k;

	for (k = 1; k <= n; k++)
	{
		for (i = 0; i < (k - 1); i++)
		{
			_putchar(32);
		}
	_putchar(92);
	_putchar('\n');
	}
}
