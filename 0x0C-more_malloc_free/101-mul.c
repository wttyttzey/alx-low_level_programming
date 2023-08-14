#include <unistd.h>
#include <stdlib.h>

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
size_t len = 0;

while (*s)
{
len++;
s++;
}
return (len);
}

/**
 * _isdigit - Check if a character is a digit.
 * @c: The input character.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
return ((c >= '0' && c <= '9'));
return ((c >= '0' && c <= '9'));
}

/**
@@ -34,17 +18,20 @@ return ((c >= '0' && c <= '9'));
 */
int _atoi(char *s)
{
int result = 0;
int result = 0;

while (*s)
{
if (!_isdigit(*s))
exit(98);
while (*s)
{
if (!_isdigit(*s))
{
write(1, "Error\n", 6);
exit(98);
}

result = result * 10 + (*s - '0');
s++;
}
return (result);
result = result * 10 + (*s - '0');
s++;
}
return( result);
}

/**
@@ -55,7 +42,7 @@ return (result);
 */
int _mul(int num1, int num2)
{
return (num1 * num2);
return( num1 * num2);
}

/**
@@ -66,31 +53,46 @@ return (num1 * num2);
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int num1, num2, result;

if (argc != 3)
{
write(1, "Error\n", 6);
exit(98);
}
if (argc != 3)
{
write(1, "Error\n", 6);
exit(98);
}

if (!_isdigit(*argv[1]) || !_isdigit(*argv[2]))
{
write(1, "Error\n", 6);
exit(98);
}
if (!_isdigit(*argv[1]) || !_isdigit(*argv[2]))
{
write(1, "Error\n", 6);
exit(98);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = _mul(num1, num2);
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = _mul(num1, num2);

while (result > 0)
{
putchar(result % 10 + '0');
result /= 10;
}
putchar('\n');
if (result == 0)
{
write(1, "0\n", 2);
}
else
{
char buffer[20];
int i = 0;

while (result > 0)
{
buffer[i++] = result % 10 + '0';
result /= 10;
}

while (i > 0)
{
write(1, &buffer[--i], 1);
}
write(1, "\n", 1);
}

return (0);
return (0);
}

