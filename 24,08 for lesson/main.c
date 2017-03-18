#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i,n,max,max_number;		// i - s4et4ik n - konec
	printf("Input number of elements = n =\n");
	scanf("%d",&n);
	printf("Input massive\n");
//	int A[100]={-1,-5};
	int A[n];
	
	
	for (i=0;i<=n;i++)
	{
		scanf("%d",&A[i]);
		if (i==0)
		{
			max=A[i];
			max_number=i;
		}
		if (A[i]>max)
		{
			max=A[i];
			max_number=i;	
		}
		
	}
//	scanf("%d %d",&k,&n);
//	if (d<0) {
//		d=360+d;
//	}
//	if ((k<=200) && (k>=1) && (n<=20000) && (n>=1)) {
//		if ((n%k)==0) {
//			printf("%d %d\n",n/k,n-k*(n/k));
//			} 
//		else {
//			printf("%d %d\n",n/k+1,n-k*(n/k));
//				};	
//	}
	printf("Maxximum value element A[n] = %d\n",max);
	printf("Number of Maxximum value element A[n] = %d\n",max_number);
	return 0;
}


