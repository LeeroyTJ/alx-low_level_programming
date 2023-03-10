#!/bin/bash
#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: character to be checked
 * Return: 1 On success
 * Or returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
