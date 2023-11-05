#include "main.h"
/**
 * _strcat - pointers, arrays and strings
 * Description: appends the src string to the dest string
 * @dest: first string
 * @src: 2nd string
 * Return: the pointer to character
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
