#include "main.h"
/**
*_islower - task 3 for holberton project
*Description: 'program to check if char is lowercase'
*@c: should be a character
*Return: return 1 if c is lowercase and 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
