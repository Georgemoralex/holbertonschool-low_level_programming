#include "main.h"
/**
* print_last_digit - task 7 for holberton project
* Description: 'program to print last digit'
* @n: ins int
* Return: return value of last digit
*/
int print_last_digit(int n)
{
	int lastD;
	int absD;

	lastD = n % 10;
	absD = _abs(lastD);
	_putchar('0' + absD);
	return (absD);
}
/**
* _abs - task 6 for holberton abs project
* Description: 'function to compute abs value'
* @n: must be integer
* Return: always absolute value
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
		if (n < 0)
		{
			return (n * -1);
		}
	else
	{
		return (0);
	}
}
