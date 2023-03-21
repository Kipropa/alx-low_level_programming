#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * just chose a while loop, a for loop could work better
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 9)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		j = 'a';
		i++;
	}
}
