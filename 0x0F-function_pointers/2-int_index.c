#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: group of elements
 * @size: the number of elements
 * @cmp: pointer to function
 *
 * Return: the index of the first element for whi
 * ch the cmp function does not return 0, or -1
 * if no element matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
