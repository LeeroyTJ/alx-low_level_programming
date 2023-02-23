#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int ch = 0;

	for (; ch <= 9; ch++)
	{
	if (ch == 2 || ch == 4)
	{
		continue;
	}
	else
	{
		_putchar(ch + '0');
	}
	}
	_putchar('\n');
}

