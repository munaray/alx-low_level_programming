#include "main.h"

/**
 * _strcat - This marge two string.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * Return: the destination string pointer.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
