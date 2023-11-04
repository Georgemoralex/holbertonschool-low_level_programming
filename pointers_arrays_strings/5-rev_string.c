#include "main.h"
/**
*rev_string - function to reverse string
*Description: reverses string given
*@s: string to be reversed
*/
void rev_string(char *s)
{
	int i;
	char c[_strlen(s)];
	int j;

	for (i = _strlen(s) - 1, j = 0; i >= 0; i--, j++)
	{
		c[j] = s[i];
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
