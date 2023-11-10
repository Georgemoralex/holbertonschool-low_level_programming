#include "main.h"
/**
*_memset - function to fill memory with a constant byte
*Description: fills 1st n bytes of mem area pointed 2 by s with const byte b
*@s: char type
*@b: char type
*@n: integer type
*Return: a pointer to the memory area S
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
