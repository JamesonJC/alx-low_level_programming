#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - Points to two dimentional arrays on a dynamic memory
 * @width: the number of columns of the array pionted
 * @Height: Number of raws of the arrat pointed 
 * @Return: a pointer to newly created 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **_2daPtr;
	int c = 0, r = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2daPtr = malloc(sizeof(int *) * height);

	if (_2daPtr == NULL)
		return (NULL);

	for ( ; c < height; c++)
	{
		_2daPtr[c] = malloc(sizeof(int) * width);
		if (_2daPtr[c] ==  NULL)
		{
			for ( ; c >= 0; c--)
				free(_2daPtr[c]);

			free(_2daPtr);
			return (NULL);
		}
	}
	for (c = 0; c < width; c++)
	{
		for ( ; r < width; r++)
			_2daPtr[c][r] = 0;
	}

	return (_2daPtr);
}
