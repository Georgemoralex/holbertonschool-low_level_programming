#include "main.h"
/**
 * _pow_recursion - prints x number raised to y power
 * Description: prints any number raised to y power
 * @x: integer x number that will be raised to y power
 * @y: power which x number will be raised to
 * Return: nothing to return
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
