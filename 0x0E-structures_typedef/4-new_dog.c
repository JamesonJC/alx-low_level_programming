#include "stdlib.h"
#include "dog.h"

/**
 * dog_t *new_dog - A new object of type dog inheriting member types
 *		    of the first dog
 * @name: Name of the new object
 * @age: Age of the new object
 * @owner: Owner of the object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dogs;
	int i, lnOfName, lnOfOwner;

	if (!(name) || !(owner))
		return (NULL);

	_dogs = malloc(sizeof(dog_t));

	if (!(_dogs))
		return (NULL);

	for (lnOfName = 0; name[lnOfName]; lnOfName++)
		;
	_dog->name = malloc(sizeof(char) * (lnOfName++));
	if (!(_dogs->name))
	{
		free(_dogs);
		return (NULL);
	}

	for (i = 0; i < lnOfName; i++)
		_dogs->name[i] = name[i];

	_dogs->age = age;

	for (lnOfOwner = 0; owner[lnOfOwner]; lnOfOwner++)
		;
	_dog->owner = malloc(sizeof(char) * (lnOfOwner++));
	if (!(_dogs->owner))
	{
		free(_dog->name);
		free(_dogs);
		return (NULL);
	}

	for (i = 0; i < lnOfOwner; i++)
		_dogs->owner[i] = owner[i];

	return (_dogs);
}
