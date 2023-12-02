#ifndef DOG
#define DOG
#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
*new_dog - creates new dog
*Description: function that creates new dog with name, age and owner
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*Return: pointer to dog_t or NULL if it fails
*/

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *pointerD;
    int i, length_name, length_owner;

    pointerD = malloc(sizeof(dog_t));
    if (pointerD == NULL || name == NULL || owner == NULL) {
        free(pointerD);
        return NULL;
    }

    length_name = 0;
    while (name[length_name] != '\0') {
        length_name++;
    }

    length_owner = 0;
    while (owner[length_owner] != '\0') {
        length_owner++;
    }

    pointerD->name = malloc(length_name + 1);
    pointerD->owner = malloc(length_owner + 1);

    if (pointerD->name == NULL || pointerD->owner == NULL) {
        free(pointerD->owner);
        free(pointerD->name);
        free(pointerD);
        return NULL;
    }

    for (i = 0; i < length_name; i++) {
        pointerD->name[i] = name[i];
    }
    pointerD->name[i] = '\0';

    pointerD->age = age;

    for (i = 0; i < length_owner; i++) {
        pointerD->owner[i] = owner[i];
    }
    pointerD->owner[i] = '\0';

    return pointerD;
}

#endif