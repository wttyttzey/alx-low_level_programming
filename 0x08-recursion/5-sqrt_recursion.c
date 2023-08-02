#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the natural square root
* Return: the natural square root
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: number whose square root is to be found
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt == n)
return( i);
else if (sqrt > n)
return (-1);

return (_sqrt(n, i + 1));
}
