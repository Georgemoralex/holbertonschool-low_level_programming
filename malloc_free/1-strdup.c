#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to the given string
*Description: allocates memory for the new string using malloc
*@size: size of the array to be created
*@c: char that will initialize in the array
*Return: 1 if digit else 0
*/
char *_strdup(char *str)
{
	char *array;
    int i = 0, j = 0;
    int size;

    if (str == NULL)
    {
        return (NULL);
    }
    while (*(str + i) != '\0')
    {
        i++;
    }
    size = i + 1;
    array = malloc((i + 1), sizeof(char));

    for (j = 0; j < i; j++)
    {
        array[j] = str[j];
    }

    if (array == NULL)
    {
        return (NULL);
    }
    return (array);

}