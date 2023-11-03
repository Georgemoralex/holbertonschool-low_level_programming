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
/**
 *_strlen - function to calculate lenght
 *Description: gets the lenght of a string
 *@s: is a string of characters
 *Return: the lenght of the string as integer
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

