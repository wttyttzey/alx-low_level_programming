#include "main.h"

/**
 * Print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum1, = 0, sum2 = o;


	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];
	
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		summ2 =sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
