/**
*print_name - function that prints a name
*Description: function that prints a name
*@name: name of dog
*@char: age of dog
*Return: void
*/

void print_name(char *name, void (*f)(char *)) {

char c;

c = (*f)(name);
return (c);

}