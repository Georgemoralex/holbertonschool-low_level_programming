#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world mothefucer";
    char *f = "o";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
char *_strstr(char *haystack, char *needle) 
{
if (haystack == NULL || needle == NULL) 
{
return NULL; 
}

int hLength = 0;
int nLength = 0;

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