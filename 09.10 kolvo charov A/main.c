#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int i,count;
	char A[100],a1;
	scanf("%s",&A);
	printf("\n");
	count=0;
	for (i=1; i<=strlen(A); i++)
	{
		if (A[i]=='a')
			count++;
	}
	printf("%s\n",A);
	printf("%d\n",strlen(A));
	printf(" count = %d",count);
	scanf("%s",&a1);
	return 0;
}
