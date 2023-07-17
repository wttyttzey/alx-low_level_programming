#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;

c = '0';
while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
