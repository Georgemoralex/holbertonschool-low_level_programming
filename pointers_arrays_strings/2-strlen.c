#include "main.h"
/**
*_strlen - function to calculate lenght
*Description: gets the lenght of a string
*@s: is a string of characters
*Return: the lenght of the string as integer
*/
int _strlen(char *s)
{
	int j;
	for (s = 0; j < 1; s++)
		{
			if((*s = '\n'))
				{
					j = 1;
				}
			else
				{
					j = 0;
				}
		}
	return (s);
}
