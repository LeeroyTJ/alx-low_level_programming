#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;

	while (a <= 10)
	{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar(i);
	}
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
