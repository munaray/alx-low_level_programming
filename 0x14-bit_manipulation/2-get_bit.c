#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: search number
 * @index: index of the bits starting from 0
 * Return: value of the bit on success or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;

if (index > 63)
return (-1);

bit_value = (n >> index) & 1;

return (bit_value);
}
