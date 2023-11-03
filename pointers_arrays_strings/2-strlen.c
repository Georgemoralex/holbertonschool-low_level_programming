#include "main.h"
/**
*_strlen - function to calculate lenght
*Description: gets the lenght of a string
*@s: is a string of characters
*Return: the lenght of the string as integer
*/
int _strlen(char *s)
{
	char text[] = *s;
	int i;
	int j;

	for (i = 0; j < 1; i++)
		{
			if((text[i] = '\n'))
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
