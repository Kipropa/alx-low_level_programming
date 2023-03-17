#include <stdio.h>

/**
 * main - Entry point
 *
 * Return 0-Success
 */




int main(void)
/*main program code that prints the alphabet in lowercase, followed by a new line*/
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	/*program that prints the alphabet in lowercase, followed by a new line*/
	return (0);
}
