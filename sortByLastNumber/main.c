#include <stdio.h>
int sortBubble (int *, int);

int main(int argc, char *argv[])
{
	printf("Input count of elements and elements of massive\n");
	int n;
	scanf("%d",&n);
	int i;
	int A[n];
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
	sortBubble(*A,n);
	return 0;
}

int sortBubble (int A*, int n)
{
	printf("")
}
