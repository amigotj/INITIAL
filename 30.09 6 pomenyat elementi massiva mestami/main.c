#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int i,n,temp;		// n - razmer massiva i - s4et4ik flag - flag
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
	for (i=0; i<n/2; i++)
	{
		temp=A[i];
		A[i]=A[n-1-i];
		A[n-1-i]=temp;
	}
//	printf("\n");
	for (i=0; i<n; i++)
	{
		printf("%d ",A[i]);
	}
//		while (j<n && flag==0)
//		{
//			if (B[j]==A[i]) flag=1;
//			j++;
//		}
//	scanf("%d",&i);
	return 0;
}