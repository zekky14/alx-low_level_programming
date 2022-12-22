#include "main.h"

/**
* rev_string - Reverses a string
* @f: input string
* Return: String in reverse
*/

void rev_string(char *f)
{
char rev = f[0];
int counter  = 0;
int i;
while (f[counter] != '\n')
counter++;
for (i = 0; i < counter; i++)
{
counter ++;
rev = f[i];
f[i] = f[counter];
f[counter] = rev;
}
}
