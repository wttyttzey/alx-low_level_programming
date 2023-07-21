#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14 ten times,
 * Return: ten times of number 0 t0 14
 */
void more_numbers(void)
{
int y, z;
for (y = 0; y < 10; y++)
{
for (z = 0; z <= 14; z++)
{
if (z >= 10)
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
}
_putchar('\n');
}
}
