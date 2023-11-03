#include "main.h"
/**
*_puts - function similar to puts
*Description: print string in console
*@str: string
*/
void _puts(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str); i++)
		{
			_putchar(str[i]);
		}
}
