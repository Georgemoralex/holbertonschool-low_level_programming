#include "main.h"
/**
*print_sign - task 5 for holberton project
*Description: 'program to check sign of numer'
*@n: should be a integer
*Return: return 1 if n is greater than 0, 0 if its 0, -1 if its less than 0
*/
int print_sign(int n)
{
	char* plus = "+";
	char* minus = "-";
	char* zero = "0";
	
	if (n > 0)
	{
		_putchar("%s", plus);
		return (1);
	}
		if (n < 0)
		{
			_putchar("%s", minus);
			return (-1);
		}
		else
		{
			_putchar("%s", zero);
			return (0);
		}
}
