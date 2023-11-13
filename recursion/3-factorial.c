#include "main.h"
/**
 * factorial - prints factorial
 * Description: prints factorial of n number using recursion
 * @n: integer which factorial will be calculated
 * Return: result integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
