#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;

for (d = '0'; d < 10; d++)
{
putchar(d);

if (d < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

