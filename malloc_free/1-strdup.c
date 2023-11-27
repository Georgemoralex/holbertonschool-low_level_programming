#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to the given string
*Description: allocates memory for the new string using malloc
*@str: string to be duplicated
*Return: a pointer to the new array or NULL if str is empty
*/
char *_strdup(char *str)
{
	char *array;
    int i = 0, j = 0;

    if (str == NULL)
    {
        return (NULL);
    }
    while (*(str + i) != '\0')
    {
        i++;
    }
    array = malloc((i + 1) * sizeof(char));

    if (array == NULL)
    {
        return (NULL);
    }

    for (j = 0; j < i; j++)
    {
        array[j] = str[j];
    }

    return (array);

}