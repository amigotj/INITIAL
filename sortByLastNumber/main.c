#include <stdio.h>
int sortBubble (int *, int);

int main(int argc, char *argv[])
{
//	printf("Input count of elements and elements of massive\n");
	int n;
	scanf("%d",&n);
	int i;
	int A[n];
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}

/*	n = 4;
	int	A[] = {19,20,32,48};
*/	sortBubble(A,n);
	return 0;
}

int sortBubble (int A[], int n)
{
	int i,j,temp;
	for (i=0; i<n; i++)
	{
		for (j=i; j<(n); j++)	
		{
			if ((A[i]%10)>(A[j]%10))
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	for (i=0; i<n; i++)
	{
		printf("%d ",A[i]);
	}
//	printf("\n123431515");
	return 0;
}
