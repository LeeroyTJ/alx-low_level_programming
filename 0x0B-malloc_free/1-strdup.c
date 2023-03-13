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
 * _strcpy - copy string
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - returns pointer to a newly allocated space in
 * memory which contain a copy of the string.
 * @str: the string
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	dst = (char *) malloc(sizeof(char) * size);

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
