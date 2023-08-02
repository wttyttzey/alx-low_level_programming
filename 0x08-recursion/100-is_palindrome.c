#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
char *end;
if (s == 0)
return 0;

end = s;
while (*end != '\0')
end++;

end--;

while (s < end)
{
if (*s != *end)
return 0;

s++;
end--;
}

return 1;
}
