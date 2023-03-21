/**
 * _islower- checks if character is lower or upper
 *
 * @c: character keyed in
 *
 * Return: 1 is lower, 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
