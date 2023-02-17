#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int p, q, r;

	for (p = '0'; p < '9'; p++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	for (r = q + 1; r <= '9'; r++)
	{
	if ((q != p) != r)
	{
	putchar(p);
	putchar(q);
	putchar(r);
	if (p == '7' && q == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
