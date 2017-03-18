#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i,n,i_minus,i_zero,i_plus,num_minus,num_zero;		// i - s4et4ik n - konec
	printf("Input number of elements = n =\n");
	scanf("%d",&n);
	printf("Input massive\n");
//	int A[100]={-1,-5};
	int A[n],B[n];
	i_minus=0;
	i_zero=0;
	i_plus=0;
	num_minus=0;
	num_zero=0;
	for (i=0;i<=n;i++)
	{
		scanf("%d",&A[i]);
		if (A[i]<0)	
		num_minus++;
		if (A[i]==0)	
		num_zero++;
	}
	i_zero=num_minus;
	i_plus=num_minus+num_zero;	
	for (i=0;i<=n;i++)
	{
		if (A[i]<0)	
		{
			B[i_minus]=A[i];
			i_minus++;
		}
		if (A[i]==0)	
		{
			B[i_zero]=A[i];
			i_zero++;
		}
		if (A[i]>0)	
		{
			B[i_plus]=A[i];
			i_plus++;
		}		
	}

//	printf("= i = %d  = n = %d \n",i,n);

	for (i=0;i<=n;i++)
	{
		printf("  %d",B[i]);
	}
	printf("\n");
	return 0;
}


