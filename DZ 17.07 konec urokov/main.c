#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n;		// n - kol-vo urokov
//	printf("input number of classes  n  \n");
	scanf("%d",&n);
	 
//	printf("classes ending in \n");

//	n*45+(n-1)/2*15+(n/2)*5                    total time in minutah
//	9+(n*45+(n-1)/2*15+(n/2)*5)/60)			 hours part time + 9
//	(n*45+(n-1)/2*15+(n/2)*5)%60             	sekonds part time 
	
//	printf("%d  %d\n",(),();
//	printf("%d\n",n*45+(n-1)/2*15+(n/2)*5);  total time in minutes
	printf("%d  %d\n"  ,(9+(n*45+(n-1)/2*15+(n/2)*5)/60),((n*45+(n-1)/2*15+(n/2)*5)%60));
	return 0;
}

