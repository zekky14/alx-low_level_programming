#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{

int a;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a == 8)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
