#include <stdio.h>


int main(int argc, char *argv[])
{
	FILE * fo;
	fo=fopen("test.txt","rt");
//	printf("%d\n",fo);
	int x, qwe;

	while (!feof(fo))
	{
		fscanf(fo,"%d",&x);
		printf("%d ",x);
	}
	fclose(fo);
	scanf("%d",&qwe);
//	printf("\nHello C-Free!");
	return 0;
}
