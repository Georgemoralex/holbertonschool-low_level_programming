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
char *str_concat(char *s1, char *s2)
{
	char *array;
    int i = 0, j = 0, t = 0;
   

    printf("%d", s2[0]);
    printf("%d", s1[0]);
    if (s1 == NULL)
    {
        s1 = "";
    }

    if (s2 == NULL)
    {
        s2 = "";
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

    return (array);


}