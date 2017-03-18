#include <stdio.h>
//int arrayMax (int n, int m, int A[n][m]);   
//void arraygen (int n, int m, int high, int low, int *A[m]);


int main(int argc, char *argv[])
{
	int n,m;
	scanf("%d/n",&n);
	scanf("%d/n",&m);	
	int A[n][m];
	int i,j,j1,k;
	j=0;
	k=0;
	for (i=0; i<n; i++)
	{
		if ((n/2)==0)
		{
			for (j1=j; j1<(j+10); j1++)
			{
				k++;
				A[i][j1]=k;				
				printf("%d  ",A[i][j1]);
			}
			j=j+10;
		}
		else
		{
			for (j1=(j+10); j1>j; j1--)
			{
				k++;
				A[i][j1]=k;
				printf("%d  ",A[i][j1]);
			}
			j=j+10;
		}
		printf("\n");
	}	

	
	
	return 0;
}