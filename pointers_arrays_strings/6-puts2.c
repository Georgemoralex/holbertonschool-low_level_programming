#include "main.h"
/**
*puts2 - function similar to puts
*Description: print every other character in console
*@str: string
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
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
