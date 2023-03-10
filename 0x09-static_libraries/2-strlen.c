#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: the string to get the length from
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
