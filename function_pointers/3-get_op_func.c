#include <stdio.h>
#include "3-calc.h"
/**
*get_op_func - checks the operator
*Description: checks the operator
*@s: 1st integer
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
    while (ops[i].op != NULL && *s != '\0' && *s == ops[i].op[0]) {
        i++;
    }
    return (ops[i].f);
}