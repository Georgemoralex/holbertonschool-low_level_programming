#include "main.h"
#include <stddef.h>
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
	if ((*s == '\0'))
	{
		return (NULL);
	}
	else
	{
		while (*s != '\0')
		{
			return (s);
			s++
		}
	}
}
