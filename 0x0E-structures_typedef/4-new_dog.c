#include "stdlib.h"
#include "dog_h"

/**
 * dog_t *new_dog - A new object of type dog inheriting member types
 *		    of the first dog
 * @name: Name of the new object
 * @age: Age of the new object
 * @owner: Owner of the object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_2nd_dog;
	int i, j, k;

	if (!name || !owner)
		return (NULL);

	_2nd_dog = malloc(sizeof(struct dog_t));

	if (!(_2nd_dog))
		return (NULL);

	_2nd_dog->name = name;
	_2nd_dog->age = age;
	_2nd_dog->owner = owner;

	return (_2nd_dog);
}
