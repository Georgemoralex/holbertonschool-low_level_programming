#ifndef DOG_H
#define DOG_H
#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_dog - prints a struct dog
 *Description: function that prints all the information of the dog
 *@d: struct dog
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (!(d->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

#endif
