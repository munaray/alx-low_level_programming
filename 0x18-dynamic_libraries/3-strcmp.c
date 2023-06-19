#include "main.h"

/**
 * _strcmp - This is used to compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: if s1 > s2 return +ve byte
 *         otherwise if s1 = s2 return 0
 *         otherwise return -ve byte if str1 < str2.
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
