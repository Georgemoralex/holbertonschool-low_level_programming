#include "main.h"
/**
*_memset - function to fill memory with a constant byte
*Description: fills the first n bytes of the memory area pointed to by s with the constant byte b
*@a: char type 
*@b: char type
*@n: integer type
*Return: a pointer to the memory area S
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*s)
}
