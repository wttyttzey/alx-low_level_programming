#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - Helper function to find the square root recursively.
 * @n: The number whose square root is to be found.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
int mid, mid_squared;

if (start > end)
return -1;
mid = start + (end - start) / 2;
mid_squared = mid * mid;

if (mid_squared == n)
return mid;
else if (mid_squared < n)
return _sqrt_recursion_helper(n, mid + 1, end);
else
return _sqrt_recursion_helper(n, start, mid - 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be found.
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;

return _sqrt_recursion_helper(n, 0, n);
}
