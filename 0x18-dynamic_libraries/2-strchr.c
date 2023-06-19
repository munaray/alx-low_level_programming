#include "main.h"
#include <stdio.h>

/**
 * _strchr - This locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: found c return a pointer the first occurence
 * otherwise return NULL.
 */
char *_strchr(char *s, char c)
{
		int a;
		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
