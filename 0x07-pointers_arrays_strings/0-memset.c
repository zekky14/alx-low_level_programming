#include "main.h"


/**
* _memset -Fills the first n  bytes of the memory area
* pointed to by @s withthe constant byte @c.
* @s: A pointer to the memry area to be filled
* @c: The character to fill the emory are with
* @n: The number of the bytes to be filled.
* description _memset: other there
*
* Return: A pointer to be filled memeory are @s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
for (index = 0; index < n; index++)
s[index] = b;
return (s);
}
