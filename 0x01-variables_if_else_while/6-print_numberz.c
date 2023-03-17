#include <stdio.h>


/**
 *main - Entry Point
 *
 *Return: 0 is success
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
