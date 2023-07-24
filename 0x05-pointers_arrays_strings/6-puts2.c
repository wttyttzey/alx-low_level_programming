#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int k = 0;
	while (str[k] != '\n')
	{
	k++;
	}

	for (i = 0; i < k; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

