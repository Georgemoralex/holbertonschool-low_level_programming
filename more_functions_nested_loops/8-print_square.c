#include "main.h"
/**
*print_square - function to print a square
*Description: print a square n times lenght
*@size: number for lenght of square
*/
void print_square(int size);
{
	int r;
	int c;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
