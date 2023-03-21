/**
 * _abs- finds absolute value of an integer
 *
 * @a: value to be found absolute
 *
 * Return: int success
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	if (a < 0)
	{
		return (a * -1);
	}
	return (0);
}
