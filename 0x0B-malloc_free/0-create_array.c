#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character to be printed
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(sizeof(c) * size);

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;

		while (position < size)
		{
			buffer[position] = c;
			position++;
		}
		return (buffer);
	}
}
