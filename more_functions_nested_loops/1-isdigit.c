#include "main.h"
/**
*_isdigit - function similar to isdigit
*Description: check if character is a digit between 0 and 9 or not
*@c: is a number to be evaluated
*Return: 1 if digit else 0 
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
