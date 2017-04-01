#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	// tutorial 1 branch
	char A[100],a1;
	scanf("%s",&A);
	printf("\n");
	printf("%s\n",A);
	printf("%d\n",strlen(A));

	int i;
	for (i=1; i<11; i++)
	{
		printf("=");
	}
	
	scanf("%s",&a1);
	return 0;
}
