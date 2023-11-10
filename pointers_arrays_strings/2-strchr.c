#include "main.h"
/**
*_strchr - function that locates a character in a string
*Description: locates a character c in a string s
*@s: string
*@c: character c
*Return: first occurence of the character c or null if not found
*/
char *_strchr(char *s, char c)
{
	int counter = 0;

	while (*s != c)
	{
		s++;
		counter++;
	}
	while (s[counter] != '\0')
	{
		_putchar(s[counter]);
		counter++;
	}
}
