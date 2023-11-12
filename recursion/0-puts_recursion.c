#include "main.h"
/**
 * _puts_recursion: prints string
 * Description: gets a pointer to character and prints it
 * @s: string to be printed
 * Return: nothing to return
 */
void _puts_recursion(char *s)
{
	if (*s > 'z')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(char *(s + 1);
}
