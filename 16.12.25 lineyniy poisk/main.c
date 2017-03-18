#include <stdio.h>

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
	int count;
	count=0;
	x=0;
//	while (x<1000)
//	{
		scanf("%d",&x);
//		if (x>1000) printf("Vvedite v predelah ot 0 do 999");
//	}
	i=0;
	while (i<n)
	{
		if (A[i]==x) count++;
		i++;
	}
	printf("%d",count);
//	printf(" <<< n >>> <<<< x >>>> <<< count >>>> %d  %d  %d\n\n",n,x,count);
	return 0;
}
