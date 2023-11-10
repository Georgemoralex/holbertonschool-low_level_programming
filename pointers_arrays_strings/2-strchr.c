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
	while (*s != c)
	{
		s++;
	}
	if ((*s == '\0'))
	{
		return (NULL);
	}
	else
	{
		return (s);
	}
}
