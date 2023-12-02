#ifndef DOG
#define DOG
#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
*free_dog - function to free dogs
*Description: function to free all fields
*@d: dog_t struct
*Return: void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#endif