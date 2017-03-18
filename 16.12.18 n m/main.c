#include <stdio.h>
//int arrayMax (int n, int m, int A[n][m]);   
//void arraygen (int n, int m, int high, int low, int *A[m]);


int main(int argc, char *argv[])
{
	int n,m,high,low;
	int i,j;
	int max, imax, jmax;
//	printf("\nInput count sprotsmen\n");
	scanf("%d",&n);
//	printf("\nInput count attempts\n");
	scanf("%d",&m);
/*	printf("\nInput magarment high and low\n");
	scanf("%d\n",&high);
	high++;
	scanf("%d\n",&low);	
*/	int A[n][m];
//	printf("\n");
//	arraygen(n, m, high, low, &A[m]);


	for (i=0; i<=(n-1); i++)
	{
		for (j=0; j<=(m-1); j++)
		{
			scanf("%d",&A[i][j]);
			if (i==0 && j==0) 
			{
		 		max=A[i][j];
		 		imax=0;
		 		jmax=0;
			}
			//A[i][j] = (int) rand()% (high - low) + low;
			//printf("           %d",A[i][j]);
			if (max<A[i][j])
			{
				max=A[i][j];
				imax=i;
				jmax=j;
			}
		}
//		printf("\n");
	}

//	printf("  max = < %d >, imax = < %d >, jmax = < %d >\n",max,imax,jmax);
	printf("%d\n%d %d",max,imax,jmax);
	return 0;
}


/*
void arraygen (int n, int m, int high, int low, int* A[m]) // mark of first element of array
{
	int i,j;
	for (i=0; i<=(n-1); i++)
	{
		for (j=0; j<=(m-1); j++)
		{
			( A + i*m + j)= 1;//(int) rand()% (high - low) + low;
			printf(" %d",A[i][j]);
		}
	}
}

//int arrayMax (int n, int m, int A[n][m])
*/
