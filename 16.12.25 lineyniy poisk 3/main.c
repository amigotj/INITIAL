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


	x=0;
	int close;
	int isk;
//	while (x<1000)
//	{
		scanf("%d",&x);
//		if (x>1000) printf("Vvedite v predelah ot 0 do 999");
//	}
	i=0;

	close=abs(A[0]-x);
	isk=A[0];
	while (i<n)
	{
		if (close>(abs(A[i]-x))) 
		{
			close=(abs(A[i]-x));
			isk=A[i];
		}
		i++;
	}

	printf("%d",isk);	
//	printf(" <<< n >>> <<<< x >>>> <<< close >>>> <<< isk >>> %d  %d  %d %d\n\n",n,x,close,isk);
/*	int mat;
	mat=abs(3-5);
	printf("%d",mat);
*/	return 0;
}
