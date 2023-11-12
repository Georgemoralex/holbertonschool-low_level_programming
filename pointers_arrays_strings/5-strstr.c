#include "main.h"
#include <stddef.h>
/**
*_strstr - function to find needle in haystack
*Description: finds the first occurence of the needle in haystack
*@haystack: where needle will be found
*@needle: string to be found in haystack
*Return: return address of needle in haystack or null if it isnt found
*/
char *_strstr(char *haystack, char *needle)
{
	int hLength = 0;
	int nLength = 0;

	if (haystack == NULL || needle == NULL)
	{
		return NULL;
	}

	while (haystack[hLength] != '\0')
	{
		nLength = 0;

		while (needle[nLength] != '\0' && haystack[hLength + nLength] == needle[nLength])
		{
			nLength++;
		}

		if (needle[nLength] == '\0')
		{
			return &haystack[hLength];
		}
		hLength++;
	}
	return NULL;
}
