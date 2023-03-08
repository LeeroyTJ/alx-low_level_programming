#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if an integer is a prime number
 * @n: the integer to be checked
 * @i: the iteration times
 * Return: 1 for prime and 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
