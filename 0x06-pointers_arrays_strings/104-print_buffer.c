 #include "main.h"
/**
* print_buffer - Prints the content of a buffer.
* @b: The buffer to print.
* @size: The number of bytes to print.
*/
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)

putchar('\n');
else
{
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", b[i + j]);
else
printf("  ");

if (j % 2)
putchar(' ');
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] >= 32 && b[i + j] <= 126)
putchar(b[i + j]);
else
putchar('.');
}
}

putchar('\n');
}
}
}
