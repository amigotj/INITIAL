#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int n,flag,i,j;		// n - razmer massiva i - s4et4ik flag - flag
	printf("Input number of massive = n =\n");

	scanf("%d",&n);
	int A[n][n];
	srand(time(NULL));
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			A[i][j] = (int) rand() % 50 - 35;	
			printf(" %d",A[i][j]);	
		}
		printf("\n");				
	}
	flag=0;
	i=0;
	while (flag==0 && i<n)
	{
		if (A[i][n-i-1]>0) flag=1;
		i++;
	} 
	
	if (flag==1) 
		printf("est\n");
	else 
		printf("nety\n");
	return 0;
}