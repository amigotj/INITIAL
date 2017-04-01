#include <stdio.h>
#include <math.h>

//	http://informatics.mccme.ru/mod/statements/view3.php?id=11404&chapterid=112387#1

int main(int argc, char *argv[])
{
	int n,m,i,j;		// n - razmer massiva i - s4et4ik flag - flag

//	scanf("%d",&n);
//	scanf("%d",&m);
	
//	int A[n][m];

	n = 4;
	m = 5;

	int summ[m];
	int index;
	

	
	int A[][5]=	{21, 12, 23, 24, 55,
				 26, 12, 28, 39, 43,
				 11, 27, 21, 14, 39,
				 16, 17, 18, 35, 20};	


/*
	int A[][5]=	{{21, 12, 23, 24, 55},
					 {26, 12, 28, 39, 43},
					 {11, 27, 21, 14, 39},
					 {16, 17, 18, 35, 20}};	
*/	
/*
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d",&A[i][j]); // = (int) rand() % 50 - 0;		
		}
		printf("\n");				
	}
*/

	for (j=0; j<m; j++)
	{
		summ[j]=0;
		for (i=0; i<n; i++)
		{
			summ[j] = summ[j]+A[i][j];
		}
	}



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
		if	(max_j!=j)
		{
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

		
	}

	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%d ",A[i][j]);	
		}
		printf("\n");				
	}

	

	 	
	return 0;
}
