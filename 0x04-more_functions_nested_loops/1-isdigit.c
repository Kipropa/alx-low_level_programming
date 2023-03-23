#include "main.h"

/**
*_isnumber checks for a digit from 0-9
*c is the input character
*if its a digit, return 1 , otherwise, 0.
*/
int _isnumber(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
