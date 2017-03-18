#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int k,h,m;		// k - kolvo secund perevesti v  h 4asi i m minuti
//	printf("input integer, next 4etnoe will be displayed bellow  \n");
	scanf("%d",&k);
//	printf("\n");
	printf("It is %d hours %d minutes.\n"  ,k/3600,k%3600/60);
	return 0;
}

