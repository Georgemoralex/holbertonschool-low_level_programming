#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - main function
*Description: selects arithmetic oper and performs it using func pointer
*@a: 1st integer
*@b: 2nd integer
*Return: integer with result
*/

int main(int argc, char *argv[]) {

int calc;

if (argc != 4) {
        _putchar(69);
        _putchar(114);
        _putchar(114);
        _putchar(111);
        _putchar(114);
        _putchar(10);
        exit(98);
    }
if (argv[2][0] != '+' &&
    argv[2][0] != '-' &&
    argv[2][0] != '/' &&
    argv[2][0] != '*' &&
    argv[2][0] != '%' &&
    argv[2][0] != '\0') {
        _putchar(69);
        _putchar(114);
        _putchar(114);
        _putchar(111);
        _putchar(114);
        _putchar(10);
        exit(99);
}
if (atoi(argv[3]) == 0) {
        _putchar(69);
        _putchar(114);
        _putchar(114);
        _putchar(111);
        _putchar(114);
        _putchar(10);
        exit(100);
    }
calc = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", calc);
return(calc);

}