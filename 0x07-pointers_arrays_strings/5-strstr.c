#include <stdio.h>
#include "main.h"
/**
 * _strstr - Locate a substring in a string.
 * @haystack: The main string to search.
 * @needle: The substring to find within the main string.
 *
 * Return: If the substring is found, a pointer to the first occurrence
 *         of the substring in the main string is returned. If the substring
 *         is not found, NULL is returned.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;

while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
