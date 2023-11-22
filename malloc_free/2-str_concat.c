#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*str_concat - function to concatenate 2 strings
*Description: should return a pointer to the concatenation
*@s1: 1st string
*@s2: 2nd string
*Return: a pointer to the concatenation
*/
char *str_concat(char *s1, char *s2);
{
	char *array;
    char _s1, _s2;
    int i = 0, j = 0, t = 0;
    int k, l;

    if (s1 == NULL)
    {
        _s1 = "";
    }
    if (s2 == NULL)
    {
        _s2 == "";
    }

    while (*(s1 + i) != '\0')
    {
        i++;
    }
    while (*(s2 + j) != '\0')
    {
        j++;
    }
    
    t = i + j;

    array = malloc((t + 1) * sizeof(char));

    if (array == NULL)
    {
        return (NULL);
    }

    for (k = 0; k < i; k++)
    {
        array[k] = s1[k];
    }
    
    for (l = 0; l < j; l++)
    {
        array[k] = s2[];
        k++;
    }
    array[k] = '\0';

    return (array);


}