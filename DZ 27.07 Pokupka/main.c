#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a,b,n;		// a - rubli b - kopeyki n - shtuki tovara   nayti obshuyu stoumost
	long  st_rub,st_kop;
	scanf("%d %d %d",&a,&b,&n);
//	if (d<0) {
//		d=360+d;

//	i//	}f ((k<=200) && (k>=1) && (n<=20000) && (n>=1)) {
//		if ((n%k)==0) {
//			printf("%d %d\n",n/k,n-k*(n/k));
//			} 
//		else {
//			printf("%d %d\n",n/k+1,n-k*(n/k));
//				};	
//	}
	st_rub = (a*100+b);
	printf("%d\n",st_rub);
	st_rub = st_rub*n/100;
	printf("%lu\n",st_rub);
	st_kop = (a*100+b);
	printf("%d\n",st_kop);	
	st_kop = st_kop*n%100;
	printf("%lu\n",st_kop);	
	if ((a<=30000) && (a>=0) && (b<100) && (b>=0) && (n<=30000) && (n>=0)) 
	printf("%lu %lu\n",st_rub,st_kop);
	return 0;
}


