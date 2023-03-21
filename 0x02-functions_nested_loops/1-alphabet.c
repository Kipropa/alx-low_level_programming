#include "main.h"

/**
 * print_alphabet- prints the alphabet using _putchar
 *
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
