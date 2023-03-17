#include <stdio.h>


/**
 *main - prints a to z using putchar function
 *
 *Return: 0 is success
 */

int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(num - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
