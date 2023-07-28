#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the resulting string str.
 */
char *rot13(char *str)
{
char* ptr = str;
char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_codes = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

if (str == NULL)
return NULL;

while (*ptr)
{
int i;

for (i = 0; rot13_chars[i]; i++)
{
if (*ptr == rot13_chars[i])
{
*ptr = rot13_codes[i]; /* Replace the character with its rot13 equivalent */
break;
}
}

ptr++;
}

return str;
}

