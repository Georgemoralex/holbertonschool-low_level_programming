#include "main.h"
/**
*print_last_digit - task 7 for holberton project
*Description: 'program to print last digit'
*@n: should be an integer
*Return: return value of last digit
*
*_abs - task 6 for holberton abs project
*Description: 'function to compute abs value'
*@n: param integer
* Return: always abs value
*/
int _abs(int);
int print_last_digit(int n)
{
	int lastD;
	int absD;

	lastD = n % 10;
	absD = _abs(lastD);
	_putchar('0' + absD);
	return (absD);
}
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