#include <stdio.h>
void displ (int*, int);
void sortInsert (int*, int);


int main(int argc, char *argv[])
{
//	printf("input number of elements\n");
	int n;
	scanf("%d",&n);
	int A[n];     // = {2,1,5,3};
	int i;
	for (i=0; i<n; i++)
	{
//		printf("input element A[%d]\n",i);
		scanf("%d",&A[i]);	
	}
	sortInsert(A,n);
	
	
//	printf("\n==========");	

//	printf("\n");
	return 0;
}


void sortInsert(int *A, int n)
{
//	displ(A,n);
//	printf("==========");
	int i;
	int j;
	int temp;
	for (i=1; i<=(n-1); i++)
	{
		j=i;
		while(j>0 && A[j-1]>A[j])
		{
			temp=A[j];
			A[j]=A[j-1];
			A[j-1]=temp;
			displ(A,n);
			j--;
		}
	}
}

void displ(int *A, int n)
{
	int i;
//	printf("\n");
	for (i=0; i<n; i++)
	{
		printf(" %d",A[i]);
	}
	printf("\n");
}