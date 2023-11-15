#include "main.h"
/**
* _strncpy - copy string
* Description: copy a string from src into dest
* @dest: 1st string
* @src: 2nd string
* @n: bytes from src
* Return: the pointer to char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
