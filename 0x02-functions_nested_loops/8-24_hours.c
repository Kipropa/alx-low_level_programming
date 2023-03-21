#include "main.h"

/**
 *jack_bauer- prints every minute
 */

void jack_bauer(void)
{
	int i, j, first_hour, second_hour, first_minute, second_minute;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			first_hour = i / 10;
			second_hour = i % 10;
			first_minute = j / 10;
			second_minute = j % 10;
			_putchar(48 + first_hour);
			_putchar(48 + second_hour);
			_putchar(':');
			_putchar(48 + first_minute);
			_putchar(48 + second_minute);
			_putchar('\n');
		}
	}
}
