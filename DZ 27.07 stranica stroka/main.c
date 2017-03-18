#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int k,n;		// k - kol-vo strok na stranicy   n - nomer stroki
	scanf("%d %d",&k,&n);
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
	printf("%d %d\n",(n-1)/k+1,(n-1)%k+1);
	return 0;
}


