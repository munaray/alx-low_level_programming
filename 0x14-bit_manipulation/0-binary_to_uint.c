#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: is the string containing the 0 and 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int decimal_value = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
decimal_value = 2 * decimal_value + (b[i] - '0');
}

return (decimal_value);
}

