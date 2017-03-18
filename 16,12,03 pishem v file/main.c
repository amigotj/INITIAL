
#include <stdio.h>
#include <string.h>
#include <time.h>
void genfile (int count, int high, int low);
int main(int argc, char *argv[])
{
	int count;
	int low;
	int high;
	printf("\nVvedite = count =  = high =  = low = \n");
//	scanf("%d\n",&count);
	scanf("%d\n",&high);
	scanf("%d\n",&low);
	
	count=100;
//	high=60;
//	low=-40;
	genfile(count,high,low);

//	while (fgets(buff,1000, input)!=NULL)
	return 0;
}
void genfile (int count, int high, int low)
{
	FILE *ptr_fileW;
	ptr_fileW =fopen("output.txt", "wt");
	if (!ptr_fileW)
		return 1;
	int i;
	int summ;
	int buff[count];
	i = 0;
 	srand (time(NULL));
 	summ=high-low;
	while (i<count)
	{
		buff[i]= (int) rand()% (summ) + low;
		fprintf(ptr_fileW,"%d, ",buff[i]);
		printf("%d ",buff[i]);		
		i++;
	}
}

	
 