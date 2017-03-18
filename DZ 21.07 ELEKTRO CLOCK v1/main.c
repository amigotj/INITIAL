#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n;		// kol-vo minut, perevesti v hours minutes 24 00
//	printf("input total number in minutes, will be converted 24 00  \n");
	scanf("%d",&n);
//	printf("\n");
	printf(" %d  %d\n"  ,(n/60)%24,n%60);
	return 0;
}

