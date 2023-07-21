#include "main.h"

/**
 * print_square - Prints a square accoeding n number of times
 * @size: The size of the square
 * Return: empty
 */

void print_square(int size)
{
int c, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < size; c++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

