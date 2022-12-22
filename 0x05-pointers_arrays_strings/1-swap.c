#include <stdio.h>

/**
 * swap_int - Swapsthe values of two integers
 * @m: The first integer to be swapped 
 * @n: The second integer to be swapped
 * Return: nothing
 */

void swap_int(int *m, int *n)
{
int temp = *m;
*m = *n;
*n = temp;
}
