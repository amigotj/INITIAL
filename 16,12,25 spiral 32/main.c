#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d\n",&n);
	int i,j;
	int max;
	int A[2*n+1][2*n+1];
	int flag;	
	max=((2*n+1)*(2*n+1)-1);
//	printf("Hello C-Free! %d\n\n\n",max);
	for (i=0; i<=2*n; i++)
	{
		for (j=0; j<=2*n; j++)
		{
			A[i][j]=0;
		}
	}
	j=2*n;
	i=0;
	flag=1;
	A[0][2*n]=max;
	max--;
	while (max>0)
	{
//		flag=0;
		while(i<(2*n) && A[i+1][j]<(max+1))
		{
			i++;
			A[i][j]=max;
			max--;
//			flag=1;
		}
		while(j>0 && A[i][j-1]<(max+1))
		{
			j--;
			A[i][j]=max;
			max--;
//			flag=1;		
		}	
		while(i>0 && A[i-1][j]<(max+1))
		{
			i--;
			A[i][j]=max;
			max--;
//			flag=1;
		}	
		while(j<(2*n) && A[i][j+1]<(max+1))
		{
			j++;
			A[i][j]=max;
			max--;
//			flag=1;		
		}	
			
	}
	
	
/*	j++;
	while(i>=0 && A[i][j]<(max+3))
	{
		A[i][j]=max;
		max--;
		i--;
	}
	i++;
	while(j<(2*n+1) && A[i][j]<(max+3))
	{
		A[i][j]=max;
		max--;
		j++;
	}	
	j--;	
*/
//	printf("\n\n i j  %d %d \n\n", i,j);

	for (i=0; i<=2*n; i++)
	{
		for (j=0; j<=2*n; j++)
		{
			if (A[i][j]<10)	printf("  %d",A[i][j]);
			if (A[i][j]>=10 && A[i][j]<100)	printf(" %d",A[i][j]);
			if (A[i][j]>=100) printf("%d",A[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
