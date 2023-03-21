#include "main.h"

/**
 * print_sign- checks if number is positive or negative
 *
 * @n: number to be checked
 *
 * Return: 1 is positive, 0 is zero, -1 is negative, 2 is an error
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (2);
}
