#include "main.h"

/**
 * string_topupper -  Changes all lowercase letters
 * of a string touppercase.
 * @str: The string to be changed
 * Return: Apointer to the changed string
 *
 */

char *string_toupper(char *str)
{
int index = 0;
while(str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
