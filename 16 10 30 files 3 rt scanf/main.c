#include <stdio.h>


int main(int argc, char *argv[])
{
	FILE * fo;
	fo=fopen("test.txt","rt");
//	printf("%d\n",fo);
	int qwe;
	char x;
	while (!feof(fo))
	{
		fscanf(fo,"%c",&x);
		printf("%c ",x);
	}
	fclose(fo);
	scanf("%d",&qwe);
//	printf("\nHello C-Free!");
	return 0;
}
