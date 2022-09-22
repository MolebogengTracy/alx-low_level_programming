#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: an integer to swap
 * @b: another interget to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
