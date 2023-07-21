#include "main.h"

/**
 * print_triangle - Print a triangle of squares accordingly
 * @size: The size of the square  triangle.
 * Return: empty
 */

void print_triangle(int size)

{
int i, j, k;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
_putchar(32);
}
for (k = 0; k <= i; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

