#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 (success)
 */
int main(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        if (c != 'q' && c != 'e')
            putchar(c);
        c++;
    }
    putchar('\n');
    return 0;
}
