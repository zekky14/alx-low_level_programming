#include "main.h"

/**
 * _strspn - Entry Point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int byte = 0;
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
