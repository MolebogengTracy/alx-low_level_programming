#include "main.h"
/***
 * print_alphabet -> prints the lowercase alphabets 
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
