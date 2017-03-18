#include <stdio.h>
//int arrayMax (int n, int m, int A[n][m]);   
//void arraygen (int n, int m, int high, int low, int *A[m]);


int main(int argc, char *argv[])
{
	int n,m;
	scanf("%d/n",&n);
	scanf("%d/n",&m);	
	int A[n][m];
	int i,j,k,i1,j1,count;
	j=0;
	k=0;
	count=0;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			i1=0;
			j1=0;
			k=0;
			for (i1=0; i1<=i; i1++)
			{
				for (j1=0; j1<=j; j1++)
				{
					k++;
				}
			}
			A[i][j]=k;
			printf("  %d",A[i][j]);
			k++;
		}
		printf("\n");
	}	

	
	
	return 0;
}