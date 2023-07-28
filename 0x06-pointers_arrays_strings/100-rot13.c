#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the resulting string str.
 */
char *rot13(char *str)
{
char *ptr = str;
char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_codes = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

if (str == NULL)
return (NULL);

while (*ptr)
{
int i;
int found = 0;

for (i = 0; rot13_chars[i]; i++)
{
if (*ptr == rot13_chars[i])
{
*ptr = rot13_codes[i]; /* Replace the character with its rot13 equivalent */
found = 1;
break;
}
}

if (!found)
ptr++; // If the character is not in the rot13_chars, move to the next character.

ptr++;
}

return (str);
}

