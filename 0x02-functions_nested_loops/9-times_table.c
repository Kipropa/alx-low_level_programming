#include "main.h"

/**
 * times_table- prints the 9 times table
 */

void times_table(void)
{
	int i, j, product, ones, tens;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product >= 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				ones = product % 10;
				tens = product / 10;
				_putchar(48 + tens);
				_putchar(48 + ones);
			}
			else if (product < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + product);
			}
		}
		_putchar('\n');
	}
}
