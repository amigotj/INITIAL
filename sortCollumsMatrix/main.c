#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int n,m,flag,i,j;		// n - razmer massiva i - s4et4ik flag - flag
	printf("Input number of massive = n =\n");

//	scanf("%d",&n);
//	scanf("%d",&m);
	n = 4;
	m = 5;
	
	int A[n][m];
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

	return 0;
}