#include "main.h"
/**
*puts_half - function similar to puts
*Description: prints half of the  string in console
*@str: string
*/
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int half = length / 2;

		for (i = half; i < length; i++)
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
