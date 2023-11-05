#include "main.h"
/**
 * _strncat - concatenates two strings using n bytes src
 * Description: concatenates two strings using n bytes from src 
 * @dest: 1st string
 * @src: 2nd string
 * @n: bytes from src
 * Return: the pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
