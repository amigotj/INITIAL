#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int n,i,temp;		// n - razmer massiva i - s4et4ik flag - flag
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
	

	temp=A[n-1];				
	for (i=n-1; i>0; i--)    // i+=2
	{
		A[i]=A[i-1];
		//if (A[i]>A[i-1]) a=a+1;    
	}
	A[0]=temp;

	for (i=0; i<n; i++) printf("%d ",A[i]);
//	printf("\n");
//	scanf("%d",&temp);
	return 0;
}