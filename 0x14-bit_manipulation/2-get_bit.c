#include "main.h"

/**
 * returns the value of a bit at a given index
 * the index start from 0
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
