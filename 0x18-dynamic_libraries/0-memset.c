#include "main.h"

/**
 * *_memset - This fills memory with a constant byte
 * @s: The memory area to be filled
 * @b: The char to copy
 * @n: The number of times to copy b
 * Return: pointer to the memory area to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
