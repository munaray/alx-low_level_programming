#include "main.h"

/**
 * _strlen - This returns the lenght of a string.
 * @s: A pointer to the characters string.
 * Return: return the lenght of the character string.
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
