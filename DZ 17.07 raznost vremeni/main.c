#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a,b,c,a1,b1,c1;		// a,a1 - 4asi  b,b1 - minuti  c,c1 - sekundi
//	printf("Vvedite  a  b  c  \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
//	printf("Vvedite  a1  b1  c1  \n");
	scanf("%d",&a1);
	scanf("%d",&b1);
	scanf("%d",&c1);
	
	//c=(a+b+|a-b|)/2; 
//	printf("bolshee\n");
	printf("%d\n",abs((a1*3600+b1*60+c1)-(a*3600+b*60+c)));
	return 0;
}

