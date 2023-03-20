#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  creates an object of type dog
 * @name: The name of the object
 * @age: The age of the object
 * @owner: The owner of the object
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

