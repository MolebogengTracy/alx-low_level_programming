#include "main.h"
/***
 * print_alphabet - lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	for (c - 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
