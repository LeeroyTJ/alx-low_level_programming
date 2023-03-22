#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a paramet
 * er on each element of an array.
 * @array: group of elements
 * @size: size of array
 * @action: pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
