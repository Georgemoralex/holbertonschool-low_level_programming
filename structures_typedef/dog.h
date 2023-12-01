#ifndef DOG
#define DOG

/**
 *struct dog - struct that shows name, age and owner of puppy
 *Description: dog structure with the information of a puppy
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog 
 */

struct dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif