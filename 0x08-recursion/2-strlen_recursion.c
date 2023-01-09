#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a striing
 * @s: the string to count
 *
 * Return: integer value
 */
in _strlen_recursion(char *s)
{
int len = 0;
{
len++;
len  += _strlen_recursion(s + 1);
}
