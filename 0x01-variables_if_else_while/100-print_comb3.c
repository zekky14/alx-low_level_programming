#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
* main - Entry point 
* Return: Always 0 (success)
*
*/

int main(void)

{  
int r,p;
for (r = '0'; r < '9'; r++)
{
for ( p = r + 1; p <= '9'; p++)
{
if (p != r)
{
putchar(r);
putchar(p);
if ( r == '8' && p == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
