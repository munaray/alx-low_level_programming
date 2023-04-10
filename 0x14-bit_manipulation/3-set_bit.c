#include "main.h"

/**
 * A function that sets a bit at a given index to 1
 * Given that the index start from 0
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
