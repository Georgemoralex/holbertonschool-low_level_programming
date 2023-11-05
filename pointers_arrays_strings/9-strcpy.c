#include "main.h"
/**
**_strcpy - function similar to isdigit
*Description: check if character is a digit between 0 and 9 or not
*@dest: destination string
*@src: source string
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
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
