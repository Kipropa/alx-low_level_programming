#include "main.h"

/**
 * print_last_digit- returns last digit of an integer
 *
 * @a: the integer to be worked on
 *
 * Return: int that is the last character
 */

int print_last_digit(int a)
{
	int last;

	if (a < 0)
	{
		last = (a % 10) * -1;
	}
	else
	{
		last = a % 10;
	}
	_putchar('0' + last);
	return (last);
}
