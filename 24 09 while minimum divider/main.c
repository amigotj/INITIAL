#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i, n;		// n - 4islo i - s4et4ik sum - summa
//	printf("Input number of elements = n =\n");
	scanf("%d",&n);
	
//	int A[100]={-1,-5};
	i=1;
//	sum=0;
	while (i*i<=n)
	{
		printf("%d\n",i*i);
		i++;
	}
//	printf("= i = %d  = n = %d \n",i,n);

//	for (i=0;i<=n;i++)

//	printf("  %d",sum);
//	printf("\n");
	return 0;
}


