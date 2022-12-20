#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 *
 *
 *
 */

int main(void)
{
int b, y;

for (b = 0; b <= 98; b++)
{
for (y = b + 1; y <= 99; y++)
{
putchar((b / 10) + '0');
putchar((b % 10) + '0');
putchar(' ');
putchar((y /10) + '0');
putchar((y % 10) + '0');
if (b == 98 && y == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
