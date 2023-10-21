#include "main.h"
/**
*times_table - task 9 for holberton project
*Description: 'program to print 9 times table'
*Return: doesnt return anything
*/
void times_table(void)
{
	char digits[] = "0123456789";
	int i = 0;
	int j = 0;
	int result = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = digits[i] * digits[j];
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			_putchar(',');
			_putchar(32);
			_putchar(32);
			_putchar('\n');
		}
	}
}
