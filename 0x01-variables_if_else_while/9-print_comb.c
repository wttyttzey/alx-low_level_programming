#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", " in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;
for (i = 0; i <= 9; i++)
{
putchar('0' + i); /* Print the first digit */

for (j = i + 1; j <= 9; j++)
{
putchar(',');
putchar(' ');
putchar('0' + j); /* Print the second digit */

for (k = j + 1; k <= 9; k++)
{
putchar(',');
putchar(' ');
putchar('0' + k); /* Print the third digit */

for (l = k + 1; l <= 9; l++)
{
putchar(',');
putchar(' ');
putchar('0' + l); /* Print the fourth digit */
}
}
}
}

putchar('\n'); /* Print a newline character at the end */

return (0);
}
