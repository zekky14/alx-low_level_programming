#include "main.h"


/**
* _isalpha - Returns 1 if c is a letter, lowercase or uppercase
* @c: the int t print
*
* Return: Always 0
*/

int _isalpha(int c)
{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
