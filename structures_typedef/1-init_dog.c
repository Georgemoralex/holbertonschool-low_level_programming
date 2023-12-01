#ifndef DOG_H
#define DOG_H
#include "dog.h"
#include <stddef.h>

/**
 *init_dog - Write a function that initialize a variable of type struct dog
 *Description: function that inits var and prints dog name and age
 *@d: struct dog.
 *@name: name of the dog.
 *@age: age of the dog.
 *@owner: owner of the dog.
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

#endif