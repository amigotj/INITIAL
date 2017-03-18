#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int i, count, n;
	scanf("%d",&n);
	int A[n];
	printf("\n");
	count=0;
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);	
		if ((i!=0) && (i!=1))
		{
			if (A[i-2]<A[i-1] && A[i-1]>A[i]) 
				count++;
		}
	}
	printf("\n");
	printf("%d",count);	
	scanf("%d",&n);
	return 0;
}