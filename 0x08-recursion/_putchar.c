#include <unistd.h>

/**
 * This is my _putchar.c 
 
 */
int _putchar(char c)
{
  return write(STDOUT_FILEN, &c, 1);
}
