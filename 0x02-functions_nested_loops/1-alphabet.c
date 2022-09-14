#include "main.h"
/**
 * print_alphabet -> prints the lowercase alphabets
 * Return: Always success 
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
