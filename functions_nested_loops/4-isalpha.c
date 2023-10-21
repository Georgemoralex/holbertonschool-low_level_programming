#include "main.h"
/**
*_isalpha - task 4 alpha char
*Description: 'program to check if char is alpha'
*@c: should be a character
*Return: return 1 if c is lowercase and 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
