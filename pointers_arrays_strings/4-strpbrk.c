#include "main.h"
/**
*_strpbrk - function to print string from first byte found in acceot
*Description: get first occurence in the string s of any of the bytes in accept
*@s: string that will be evaluated
*@accept: string with values
*Return: a pointer to the byte in s that matches first byte in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int position = 0;
	char *temp;

	temp = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s != *accept)
			{
				accept++;
			}
			else
			{
				return (s);
			}
		}
	s++;
	position++;
	accept = temp;
	}
	if (*s != '\0')
	{
		return (s - 1);
	}
	else
	{
		return (NULL);
	}
}
