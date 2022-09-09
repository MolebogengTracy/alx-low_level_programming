#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 main-Positive anything is better than negative nothing
 *
 * Return:0
 */
int main(void)
{
	int n;
	Srand(time(0));
	x= rand()-RAND_MAX/2;

	if(n>0);
	printf("%d Positive\n",n);
	else if(n==0)
		printf("%d Zero\n",n); 
	else
		printf("%d Negative\n",n);
	return (0);
}
