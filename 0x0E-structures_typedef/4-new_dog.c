#include "stdlib.h"
#include "dog.h"

/**
 * dog_t *new_dog - A new object of type dog inheriting member types
 *		    of the first dog
 * @name: Name of the new object
 * @age: Age of the new object
 * @owner: Owner of the object
 * Return: Pointer new instences of object dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dogs;
	int i, lnOfName, lnOfOwner;

	if ((name == NULL) || (owner == NULL))
		return (NULL);

	_dogs = malloc(sizeof(dog_t));

	if (_dogs == NULL)
		return (NULL);

	for (lnOfName = 0; name[lnOfName]; lnOfName++)
		;
	_dogs->name = malloc(sizeof(char) * (lnOfName++));
	if (_dogs->name == NULL)
	{
		free(_dogs);
		return (NULL);
	}

	for (i = 0; i < lnOfName; i++)
		_dogs->name[i] = name[i];

	_dogs->age = age;

	for (lnOfOwner = 0; owner[lnOfOwner]; lnOfOwner++)
		;

	_dogs->owner = malloc(sizeof(char) * (lnOfOwner++));
	if (_dogs->owner == NULL)
	{
		free(_dogs->name);
		free(_dogs);
		return (NULL);
	}

	for (i = 0; i < lnOfOwner; i++)
		_dogs->owner[i] = owner[i];

	return (_dogs);
}
