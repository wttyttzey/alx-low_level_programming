#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
    char d;
    int h;

    d = 'a';
    h = 0;

    while (h < 10)
    {
         putchar(h + '0'); 
         h++;
    }

    while (d <= 'f')
    { 
         putchar(d); 
         d++;
    }

    putchar('\n');
    return (0);
}
