#include "main.h"
/**
*print_diagonal - function to print a backslash
*Description: print a backslash times n
*@n: number to print backslash
*/
void print_diagonal(int n)
{
        int i;
	int j;

        for (i = 0; i < n; i++)
        {
                for (j = 0; j < (n - 1); j++)
		{
			_putchar(32);
		}
	_putchar(92);
	_putchar('\n');
	}
}
