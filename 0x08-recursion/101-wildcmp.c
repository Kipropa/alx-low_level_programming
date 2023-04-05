#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 *           considered identical, otherwise returns 0.
 * @s1: the first string
 * @s2: the second string that can contain the special character '*'
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* If both strings are empty */
		return (1);
	if (*s1 == *s2) /* If the characters match */
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && *s1 == '\0') /* If s2 is all '*' */
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*' && (*(s2 + 1) == '*' || *(s1 + 1) != '\0'))
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	if (*s2 == '*' && *(s2 + 1) == '\0') /* If s2 ends in '*' */
		return (1);
	return (0); /* If none of the conditions are met */
}
