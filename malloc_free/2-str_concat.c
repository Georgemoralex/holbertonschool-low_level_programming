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
   

    
    if (s1 == NULL)
    {
        s1 = "";
        printf("%d\n", t);
    }

    if (s2 == NULL)
    {
        s2 = "";
        printf("%d\n", r);
    }

    printf("%s\n%s\n", s1, s2);


  

    
    return (0);


}