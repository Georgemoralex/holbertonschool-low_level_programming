#include <stdio.h>
#include "3-calc.h"
/**
*op_add - addition
*Description: addition
*@a: 1st integer
*@b: 2nd integer
*Return: integer with result
*/
int op_add(int a, int b) {
return (a + b);
}

/**
*op_sub - substraction
*Description: substraction
*@a: 1st integer
*@b: 2nd integer
*Return: integer with result
*/
int op_sub(int a, int b) {
return (a - b);
}

/**
*op_mul - multiplication
*Description: multiplication
*@a: 1st integer
*@b: 2nd integer
*Return: integer with result
*/
int op_mul(int a, int b) {
return (a * b);
}

/**
*op_div - division
*Description: division
*@a: 1st integer
*@b: 2nd integer
*Return: integer with result
*/
int op_div(int a, int b) {
return ((b != 0) ? a / b : 0);
}

/**
*op_mod - modulus
*Description: modulus
*@a: 1st integer
*@b: 2nd integer
*Return: integer with result
*/
int op_mod(int a, int b) {
return ((b != 0) ? a % b : 0);
}