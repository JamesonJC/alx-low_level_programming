#include "main.h"
#include "stdlib.h"

/****/

int **alloc_grid(int width, int height)
{
	int **_2D_Array;
	int column, raws;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D_Array =  malloc(sizeof(int *) * height);

	if (_2D_Array == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
		for (c = 0; c < width; c++)
			_2D_Array[r][c] = 0;

	return (_2D_Array);
	
	/*for (column = 0; column < height; column++)
	{
		_2D_Array[column] = malloc (sizeof(int) * width++);
		if (_2D_Array[column] ==  NULL)
		{
			for (; column >= 0; column--)
				free(_2D_Array[column]);

			free (_2D_Array);
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			for (raws = 0; raws < width; raws++)
				_2D_Array[column][width] = 0;
		}
	}
	return (_2D_Array);*/
}
