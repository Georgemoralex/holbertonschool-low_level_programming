#include "main.h"
/**
*_strspn - gets length of a prefix string
*Description: gets # of chars of 1st string that matches the chars in 2d string
*@s: first string that will be evaluated
*@accept: chars to be found in string 1
*Return: returns number of bytes of 1st string that matches 2nd string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	char temp = *accept;

	while (*accept != '\0')
	{
		if (*s == *accept)
		{
			counter++;
			*accept = temp;
			s++;
		}
		else
		{
			accept++;
		}
	}
	return (counter);
}
