#include <stdio.h>
#include "3-calc.h"
/**
*op_add - addition
*Description: addition
*@a: 1st integer
*@b: 2nd integer
*Return: integer with result
*/
int (*get_op_func(char *s))(int, int) {

    int i;
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    if (s == NULL)
        return (NULL);
    i = 0;
    while (s != ops[i].op && ops[i].op != NULL)
    {
        i++; 
    }
    return (ops[i].f);
}