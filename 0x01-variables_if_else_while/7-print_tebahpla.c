#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry Point 
 * Return: Always (success)
 *
 */

int main(void)

{
char low;

for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');

return (0);

}
