#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
	if (j != i)
	{
	putchar(i);
	putchar(j);
	if (i == '8' && j == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
