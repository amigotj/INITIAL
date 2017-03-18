#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a, b;		// a b - integers, needed to be switched
//	printf("input a and b witch will be switched  \n");
	scanf("%d",&a);
	scanf("%d/n",&b);	 
//	printf("switched numbers \n");

//				 
//  a=a-(a-b);  
//	b=b+(a-b);           	
	printf("\n");
//	printf("a - b = %d\n",a-b);
	printf(" %d\n %d\n"  ,a-(a-b),b+(a-b));
	return 0;
}

