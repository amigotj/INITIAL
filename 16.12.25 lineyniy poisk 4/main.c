#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int A[n];
	int i;
	i=0;
	while (i<n)
	{
		scanf("%d",&A[i]);
		i++;
	} 
	int x;
	int isk;
	scanf("%d",&x);

	i=0;
	while (i<n)
	{
		if (A[i]==x) printf("%d ",i+1);
		i++;
	}

//	printf("%d",isk);	
//	printf("\n\n <<< n >>> <<<< x >>>> %d  %d  \n\n",n,x);
/*	int mat;
	mat=abs(3-5);
	printf("%d",mat);
*/	return 0;
}
