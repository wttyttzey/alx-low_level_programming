#include "main.h"

/**
* print_number - prints an integer
* @n: the integer to print
*/

void print_number(int n);
{
int i,j,k,d;
{
_putchar('-');
n = -n;
}

for (i = 0, j = n; j > 0; i++)
j /= 10;

if (i == 0)
_putchar('0');

for (j = i - 1; j >= 0; j--)
{
for (k = 1, d = 0; d < j; d++)
k *= 10;

_putchar((n / k) % 10 + '0');
}
}

