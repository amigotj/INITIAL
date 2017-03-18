#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int i, count_slov;
	char A[100],a1;
//	scanf("%s",&A);
	gets(A);
	printf("\n");
	count_slov=1;
	for (i=1; i<=strlen(A); i++)
	{
		if ((A[i-1]!=' ') && (A[i]==' '))
		{
			count_slov++;
		}
	}
	printf("%s\n",A);
	if (A[strlen(A)-1]==' ') count_slov--;
	printf("%d\n",strlen(A));
	printf(" count_slov = %d",count_slov);
	scanf("%s",&a1);
	return 0;
}
