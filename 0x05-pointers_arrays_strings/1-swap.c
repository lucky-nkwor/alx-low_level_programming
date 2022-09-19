#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer variable
 * @b: integer variable
 * Return: 0 Always
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
