#include <stdio.h>
#define S 9

int main(int argc, char *argv[])
{
	int Ar[S][S];


short i,j;
short k;
k=0;
for (i=0;i<S;i++) 
	{
	for (j=0;j<=i;j++) 
		{
			Ar[j][i-j]=k++;
		}
	}
for (j=1;j<S;j++) 
	{
	for (i=0;i<=S-1-j;i++) 
		{
			Ar[S-1-i][j+i]=k++;
		}
	}
for (i=0;i<S;i++) {
for (j=0;j<S;j++) {
	printf("%3d",Ar[i][j]);
}
printf("\n");
}


	return 0;
}

