#include "main.h"

/**
* print_binary - A function that prints the binary representation number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int initial_value;

for (i = 63; i >= 0; i--)
{
initial_value = n >> i;

if (initial_value & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
