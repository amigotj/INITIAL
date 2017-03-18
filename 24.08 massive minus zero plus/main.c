#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i,j,n,max,max_number;		// i - s4et4ik n - konec
	printf("Input number of elements = n =\n");
	scanf("%d",&n);
	printf("Input massive\n");
//	int A[100]={-1,-5};
	int A[n],B[n];
	for (i=0;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
	j=0;
	for (i=0;i<=n;i++)
	{
		if (A[i]<0)
		{
			B[j]=A[i];
			j++;
		}
	}
	for (i=0;i<=n;i++)
	{
		if (A[i]==0)
		{
			B[j]=A[i];
			j++;
		}
	}
	for (i=0;i<=n;i++)
	{
		if (A[i]>0)
		{
			B[j]=A[i];
			j++;
		}
	}
	printf("= i = %d  = j = %d  = n = %d \n",i,j,n);
//	scanf("%d %d",&k,&n);
//	if (d<0) {
//		d=360+d;
//	}
//	if ((k<=200) && (k>=1) && (n<=20000) && (n>=1)) {
//		if ((n%k)==0) {
//			printf("%d %d\n",n/k,n-k*(n/k));
//			} 
//		else {
//			printf("%d %d\n",n/k+1,n-k*(n/k));
//				};	
//	}
	for (i=0;i<=n;i++)
	{
		printf("  %d",B[i]);
	}
	printf("\n");
	return 0;
}


