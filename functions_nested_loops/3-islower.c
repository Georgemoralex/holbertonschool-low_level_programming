#include "main.h"
/**
*_islower - check if input char is lowercase
*Description: program to check if char is lowercase
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
