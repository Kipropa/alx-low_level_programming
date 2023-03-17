#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Only function printing the random numbers
 *
 * Return: 0 is success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	switch (n < 0 ? -1 : (n > 0 ? 1 : 0))
	{
		case -1:
			printf("%i is negative\n", n);
			break;
		case 0:
			printf("%i is zero\n", n);
			break;
		case 1:
			printf("%i is positive\n", n);
			break;
	}
	return (0);
}
