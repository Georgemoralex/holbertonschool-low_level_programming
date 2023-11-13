#include "main.h"
/**
 * _sqrt_recursion - function that calculates square root
 * * Description: function that calculates the square root of n number
 * @n: integer, number to get the square root from
 * Return: integer with result or -1 if result is not narural
 */
int _sqrt_recursion(int n)
{
	return (testsquare(n, 1));
}
/**
 * testsquare - function that calculates square root
 * * Description: function that calculates the square root of n number
 * @n: integer, number to get the square root from
 * Return: integer with result or -1 if result is not narural
 */

int testsquare(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	
	if ((i * i) > n)
	{
		return (-1);
	}
	
	if (i * i == n)
	{
		return (i);
	}
	
	return (testsquare(n, i + 1));
}
