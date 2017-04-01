#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int n,m,i,j;		// n - razmer massiva i - s4et4ik flag - flag
	printf("Input number of massive = n =\n");

//	scanf("%d",&n);
//	scanf("%d",&m);
	n = 4;
	m = 5;
	
	int A[n][m];
	int summ[m];
	int index;
	srand(time(NULL));
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			A[i][j] = (int) rand() % 50 - 0;	
			printf(" %d",A[i][j]);	
		}
		printf("\n");				
	}


	for (j=0; j<m; j++)
	{
		summ[j]=0;
		for (i=0; i<n; i++)
		{
			summ[j] = summ[j]+A[i][j];
		}
	}


	printf("\n");
	for (j=0; j<m; j++)
	{
		printf(" %d",summ[j]);
	}
	printf("\n");

	int k=0;
	int j1;
	int temp;
	int max;
	int max_j;	
	int temp1;
	for (j=0; j<m; j++)
	{
		max=summ[j];
		for (j1=j; j1<m; j1++)
		{	
			if (max<summ[j1]) 
			{
				max=summ[j1];
				max_j=j1;
				
				
			}
			
		}

		for (k = 0; k<n; k++)
		{
			temp=A[k][j];
			A[k][j]=A[k][max_j];
			A[k][max_j]=temp;
		}	
		
		temp1=summ[j];
		summ[j]=summ[max_j];
		summ[max_j]=temp1;

		
	}
	printf("\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf(" %d",A[i][j]);	
		}
		printf("\n");				
	}
	printf("\n");
	
	printf("\n");
	for (j=0; j<m; j++)
	{
		printf(" %d",summ[j]);
	}
	printf("\n");
	 	
	return 0;
}
