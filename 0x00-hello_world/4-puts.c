#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always success
 */
int main (void)
{
	int n;
	Srand(time(0));
	n= rand()-RAND_MAX/2;
	if(n>0)
	  printf("%d positive\n",n);

	else if(n==0)
		printf("%d Zero\n",n);
	else
		printf("%d Negative\n",n);
	return (0);
}
