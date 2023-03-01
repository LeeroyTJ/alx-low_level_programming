#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints out a character
 * @c: a character to be printed
 * Return: 1 on success
 * On error, -1 should be returned 
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}
