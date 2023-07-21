#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9,
 * excluding 2 and 4,followed by a new line.
 */
void print_most_numbers(void)
{
int d;

for (d = 0; d < 10; d++)
{
if (d != 2 && d != 4)
_putchar(d + '0');
}

_putchar('\n');
}
