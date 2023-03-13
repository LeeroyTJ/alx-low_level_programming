#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1)) + (_strlen(s2));
	dest = (char *) malloc(sizeof(char) * size);

	if (dest == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s2 + j) != '\0'; j++)
		*(dest + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dest + i) = *(s2 + j);
		i++;
	}
	return (dest);
}
