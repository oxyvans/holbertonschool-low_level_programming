#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - main
 * @array : ints
 * @size : size
 * @action : funcion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;
	
	if (size > 0 )
		if ((array != NULL) && (action != NULL))
		{
			while (i < size)
			{
				action(array[i]);
				i++;
			}	
		}

}
