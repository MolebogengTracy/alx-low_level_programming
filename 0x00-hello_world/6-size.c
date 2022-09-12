#include <stdio.h>

/**
 * main- prints the size of many var types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%d byte(s)\n", sizeof(a));
	printf("Size of an int:%d byte(s)\n", sizeof(b));
	printf("Size of a long int:%d bytes(s)\n", sizeof(c));
	printf("Size of a long long int:%d bytes(s)\n", sizeof(d));
	printf("Size of float:%d byte(s)\n", sizeof(e));

	return (0);

}
