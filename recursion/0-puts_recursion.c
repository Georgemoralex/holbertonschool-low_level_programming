#include "main.h"
/**
 * _puts_recursion - prints string using recursion
 * Description: gets a pointer to character and prints it
 * @s: string to be printed
 * Return: nothing to return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
