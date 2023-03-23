#include <stdio.h>
#include "variadic_functions.h"

/**
 * _putchar - prints a character
 * @c: the character
 *
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
