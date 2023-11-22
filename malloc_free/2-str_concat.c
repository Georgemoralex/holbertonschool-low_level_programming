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
    
    int t = 1;
    int r = 2;
    int q = 3;

    printf("%d\n", t);
    if (s1 == NULL)
    {
        s1 = "";
        printf("%d\n", r);
    }

    if (s2 == NULL)
    {
        s2 = "";
        printf("%d\n", q);
    }


  

    
    return (0);


}