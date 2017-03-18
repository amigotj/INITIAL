#include <stdio.h>
#include<time.h>

int main(int argc, char *argv[])
{
	FILE * wt;
	wt = fopen("input.txt","w");
	srand(time(NULL));
	int Arr[100000];
	int i;
	for(i=0;i<100000;i++)
	{
	    Arr[i] = rand()%100 - 10;
//		printf("%d ",Arr[i]);
		fprintf(wt,"%d ",Arr[i]);
	}
	return 0;
}
