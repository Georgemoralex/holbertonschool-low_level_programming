#include "main.h"
#include <stdio.h>
/**
*_strlen - function to calculate lenght
*Description: gets the lenght of a string
*@s: is a string of characters
*Return: the lenght of the string as integer
*/
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; j < 1; i++)
	{
		if ((s[i] == '\n'))
			{
				j = 1;
			}
		else
			{
				j = 0;
			}
	}
	return (i);
}
