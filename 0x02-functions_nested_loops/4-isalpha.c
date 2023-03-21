/**
 * _isalpha - checks if c is an alphabet
 *
 * @c: the entry to be checked
 *
 * Return: 1 is an alphabet, 0 is not an alphabet
 */

int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
