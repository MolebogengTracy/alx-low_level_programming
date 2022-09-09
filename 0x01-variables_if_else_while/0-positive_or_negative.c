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
	int x;
	Srand(time(0));
	x= rand()-RAND_MAX/2;

	if(x>0);
	printf("%d Positive\n",x);
	else if(x==0)
		printf("%d Zero\n",x); 
	else
		printf("%d Negative\n",x);
	return (0);


}
