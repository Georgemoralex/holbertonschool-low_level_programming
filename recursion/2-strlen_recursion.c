#include "main.h"
/**
 * strlen_recursion - get string length
 * Description: calculates string length
 * @s: string to be evaluated
 * Return: integer number with length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
