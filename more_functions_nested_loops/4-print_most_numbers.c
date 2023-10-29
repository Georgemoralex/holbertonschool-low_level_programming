#include "main.h"
/**
*print_most_numbers - function to print numbers except 2 and 4
*Description: print numbers from 0 to 9, if different from 2 and 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + 48);
		}
		else
		{
		}
		_putchar('\n');
	}
}
