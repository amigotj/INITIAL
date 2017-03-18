#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a,b;		// нужно найти большее
	//float c;
//	printf("Vvedite  a  i  b  \n");
	scanf("%d",&a);
	scanf("%d",&b);
	//c=(a+b+|a-b|)/2; 
//	printf("bolshee\n");
	printf("%d\n",(a+b+abs(a-b))/2);
	return 0;
}

