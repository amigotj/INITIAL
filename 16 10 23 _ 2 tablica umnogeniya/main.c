#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int n,m,i,j,k;
	scanf("%d",&n);
	scanf("%d",&m);
	int A[n][m];
	printf("\n");
//	printf("%d",n*m);
//	printf("\n");
	i=0;
	j=0;
	for (k=0; k<n*m; k++)
	{
		if (j!=m) 
		{
			A[i][j]=i*j;
			printf("%d ",A[i][j]);
			j++;
		}
		if	(j==m)
		{
			i++;
			j=0;
			printf("\n");
		}
	}
	
	scanf("%d",&k);
	return 0;
}