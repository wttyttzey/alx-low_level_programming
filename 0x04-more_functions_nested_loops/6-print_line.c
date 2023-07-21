#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
int d;

if (n <= 0)
{
_putchar('\n');
return;
}

for (d = 0; d < n; d++)
_putchar('_');

_putchar('\n');
}
