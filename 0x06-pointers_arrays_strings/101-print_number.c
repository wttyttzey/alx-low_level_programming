#include "main.h"

/**
 * print_number - Print numbers as characters.
 *
 * @n: Integer to be printed as characters.
 *
 * Return: void
 */
void print_number(int n)
{
unsigned int n1;
n1 = (n < 0) ? -n : n;

if (n < 0)
{
putchar('-');
}

if (n1 / 10 != 0)
{
print_number(n1 / 10);
}

putchar(n1 % 10 + '0');
}
