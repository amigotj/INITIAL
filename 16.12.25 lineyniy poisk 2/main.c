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

	int flag;
	x=0;
//	while (x<1000)
//	{
		scanf("%d",&x);
//		if (x>1000) printf("Vvedite v predelah ot 0 do 999");
//	}
	i=0;
	flag=0;
	while (i<n)
	{
		if (A[i]==x) flag=1;
		i++;
	}
	if (flag==1) printf("YES");
	else printf("NO");
//	printf(" <<< n >>> <<<< x >>>> <<< count >>>> %d  %d  %d\n\n",n,x,count);
	return 0;
}
