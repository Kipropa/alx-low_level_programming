#include <stdio.h>

/**
 * print_to_98- prints natural numbers from any value to 98
 *
 * @n: the natural number that acts as origin
 */

void print_to_98(int n)
{
	int i;

	if ((98 - n) == 0)
	{
		printf("%i", 98);
	}
	else if ((98 - n) > 0)
	{
		for (i = n; i < 99; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if ((98 - n) < 0)
	{
		for (i = n; i > 97; i--)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
