#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	FILE * fo;
	fo=fopen("test.txt","wt");
	if (fo == 0 ) return 1;
//	printf("%d\n",fo);
	int a_rand,i,qwe;
	srand(time(NULL));
	for (i=1; i<=50; i++)
	{
		a_rand = (int) rand() % 5000 - 0;
		fprintf(fo,"%d\n", a_rand);
	}
//	while (!feof(fo))
//	{
//		fscanf(fo,"%d",&x);
//		printf("%d\n",x);
//	}
	fclose(fo);
	scanf("%d",&qwe);
//	printf("\nHello C-Free!");
	return 0;
}


