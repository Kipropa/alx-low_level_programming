#include <stdio.h>


/**
 *main - prints a to z using putchar function
 *
 *Return: 0 is success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
