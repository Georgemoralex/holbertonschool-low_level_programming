#include "main.h"
/**
 * auxprime- aux function for prime numbers function
 * * Description: calculates if number is divisible by 2
 * @n: integer number
 * @m: integer number
 * Return: 0 or 1 or result from n + 2
 */
int auxprime(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (auxprime(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - function that says if number is prime
 * Description: calculates if number is prime or not
 * @n: integer to be evaluated
 * Return: 1 is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (auxprime(3, n));
	}
}
