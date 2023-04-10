#include "main.h"

/**
 * flip_bits - A function that flips a bits from one number to another
 * @n: as first num
 * @m: as second num
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int intial_value;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
intial_value = exclusive >> i;
if (intial_value & 1)
count++;
}
return (count);
}
