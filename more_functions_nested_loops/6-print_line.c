#include "main.h"
/**
*print_line - function to print a line
*Description: print a line times n
*@n: number to print a line
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
