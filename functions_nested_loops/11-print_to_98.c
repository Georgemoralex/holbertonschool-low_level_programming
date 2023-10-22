#include "main.h"
/**
*times_table - task 11 for holberton project
*Description: 'program to print n to 98'
*Return: doesnt return anything
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			print_digits(i);
			_putchar(',');
			_putchar(32);
		}
		print_digits(i);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			print_digits(i);
			_putchar(',');
			_putchar(32);
		}
		print_digits(i);
	}
	else if (n = 98)
	{
		print_digits(n);
	}

}
/**
*print_digits - auxiliary function
*Description: 'function to print all digits'
*@n: number to be printed
*Return: void
*/
void print_digits(int n)
{
	if (n <0)
	{
		_putchar('-');
		n = -n
	}
	if (n >= 10)
	{
		print_digits(n / 10);
	}
	_putchar((n % 10) + '0');
}
