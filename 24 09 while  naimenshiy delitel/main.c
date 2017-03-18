#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n,a;		// n - 4islo nujno najti naymenshiy delitel
//	printf("Input number of elements = n =\n");
	scanf("%d",&n);
	if (n<2) return 1;
	a=2;
	while (n%a!=0)
	{
		a++;
	}
	printf("%d\n",a);
//	printf("= i = %d  = n = %d \n",i,n);

//	for (i=0;i<=n;i++)
	return 0;
}

//	printf("a%%b   %d\n",(a%b)); //ostatok
//	printf("a/b   %d\n",(a/b)); //celo4islenoe delenie	

