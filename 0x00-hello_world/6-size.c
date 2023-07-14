#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{

printf("size of a char:  byte(s)\n", (unsigned long)sizeof(char));
printf("size of an int: byte(s)\n", (unsigned long)sizeof(int));
printf("size of a long int:  byte(s)\n", (unsigned long)sizeof(long int));
printf("size of a long long int:  byte(s)\n", (unsigned long)sizeof(long long int));
printf("size of a float:  byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
