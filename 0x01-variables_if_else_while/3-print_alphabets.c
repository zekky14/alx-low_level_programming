#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
  char low;
  for (low = 'a'; low <= 'z'; low++)
  putchar(low);
  putchar('\n');

  for (low = 'A'; low <= 'Z'; low++)
  putchar(low);  
  return (0);
}
