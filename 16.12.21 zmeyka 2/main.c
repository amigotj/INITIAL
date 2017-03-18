#include <stdio.h>
//int arrayMax (int n, int m, int A[n][m]);   
//void arraygen (int n, int m, int high, int low, int *A[m]);


int main(int argc, char *argv[])
{
	int n,m;
	
//	scanf("%d/n",&n);
//	scanf("%d/n",&m);	

	int i,j,k,s1,s2,count;
	if (!strcmp(argv[1], "-zm"))
		if (sscanf(argv[2], "%d", &n)!=1 || sscanf(argv[3], "%d", &m)!=1)
			printf("Vvedite 2 parametra N i M");
		else
		{
	int A[n][m];
	j=0;
	k=-1;
	count=0;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			if (count==(2*m)) 
			{
				count=0;
				k=k+m-1;
			}
			if (count < m)	k++;
			if (count == m)	k=k+m;
			if (count > m) 	k--;

			A[i][j]=k;
			if (A[i][j]<10) printf("  %d",A[i][j]);
			else if (A[i][j]>=10 && A[i][j]<100) printf(" %d",A[i][j]);
			else if (A[i][j]<1000) printf("%d",A[i][j]);
			count++;			
		}
		printf("\n");
	}	

	
				
		}

	return 0;
}