#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: the first string
 * @as2: second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)

{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
