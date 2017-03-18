#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a,b,n;		// a - rub pirogok  b - kop pirogok  n - kol-vo  pirogkov
//	printf("input  a  b  n  \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	
//	n*(a*100+b)/100 - rubli
//	n*(a*100+b)%100 - kopeyki
//	printf("total price of cakes\n");
	printf("%d %d\n",n*(a*100+b)/100,n*(a*100+b)%100);
	return 0;
}

