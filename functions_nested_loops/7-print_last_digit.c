#include "main.h"
/**
*print_last_digit - task 7 for holberton project
*Description: 'program to print last digit'
*@n: should be an integer
*Return: return value of last digit
*/
int print_last_digit(int n)
{
	int lastD;
	
	lastD = _abs(n % 10);
	
	_putchar('0' + lastD);
	return (lastD);
}
