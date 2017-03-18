#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int n,i,a;		// n - razmer massiva i - s4et4ik flag - flag
//	printf("Input number of massive = n =\n");

	scanf("%d",&n);
	int A[n];
//	srand(time(NULL));
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
//		A[i] = (int) rand() % 50 - 20;	
//		printf(" %d",A[i]);	
	}
	printf("\n");
	
	a=0;				
	for (i=1; i<n; i++)    // i+=2
	{
		if (A[i]>A[i-1]) a=a+1;    
	}
	printf("%d",a);	
//	printf("\n");
	return 0;
}