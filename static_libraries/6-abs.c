#include "main.h"
/**
*_abs - task 6 for holberton project
*Description: 'program to compute abs value'
*@n: integer
* Return: always 0
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
