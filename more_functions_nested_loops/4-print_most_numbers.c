#include "main.h"
/**
*print_numbers - function to print numbers
*Description: print numbers from 0 to 9
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i =! 2 || i =! 4)
			_putchar(i + 48);
	}
	_putchar('\n');
}
