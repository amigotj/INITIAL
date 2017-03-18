#include <stdio.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int A[n];
	int i;
	i=0;
	while (i<n)
	{
		scanf("%d",&A[i]);
		i++;
	} 
	i=2;
	while (i<n)
	{
		if (A[i-2]>A[i-1])	
			A[i]=(A[i]+A[i-1]);
		else				
			A[i]=(A[i]+A[i-2]);
		i++;
	} 
	printf("%d\n",A[n-1]);
return 0;
}

