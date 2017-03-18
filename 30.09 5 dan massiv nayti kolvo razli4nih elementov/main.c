#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int n,i,j,flag,k,baza;		// n - razmer massiva i - s4et4ik flag - flag
//	printf("Input number of massive = n =\n");

	scanf("%d",&n);
	int A[n],B[n];
//	srand(time(NULL));
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
		B[i]=A[0];
//		A[i] = (int) rand() % 50 - 20;	
//		printf(" %d",A[i]);	
	}
	k=0;
	for (i=0; i<n; i++)
	{
		flag=0;
		j=0;
		while (j<n && flag==0)
		{
			if (B[j]==A[i]) flag=1;
			j++;
		}
		if (flag==0) 
		{
			B[k]=A[i];
			k++;
		}
	}	
	printf("%d",k+1);
//	scanf("%d",&i);
	return 0;
}