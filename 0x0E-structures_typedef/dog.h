#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  creates an object of type dog
 * @name: The name of the object
 * @age: The age of the object
 * @owner: The owner of the object
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/** functions prototyping*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef struct dog
 */
typedef struct dog dog_t;

/** function prototyping continues*/
dog_t *new_dog(char *name, float age, char *owner);

#endif

