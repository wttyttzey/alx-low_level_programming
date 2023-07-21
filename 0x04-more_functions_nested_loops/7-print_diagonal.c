#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times to print diagonal lines
 * Return: empty
 */
void print_diagonal(int n)
{
int i, l;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (l = 0; l < i; l++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
