#include <stdio.h>
void razmen (int n);
int main(int argc, char *argv[])
{
	int n;
	printf("Input amount < N >\n");
	scanf("%d",&n);
	printf("\n");
	razmen(n);
	printf("\nHello C-Free < n = %d >\n",n);
	return 0;
}

void razmen (int n)
{
	n=n*100;
    int a,b;
	a = 5/3;
	b = 5%3;
	printf("5/3 = %d\n",a);
	printf("5%%3 = %d\n\n\n",b);
	// разбить по 25 10 5 1
	printf("Exchange < 25 10 5 1 > = %d %d %d %d, Total coins = %d/n",n/25,n%25/10,n%25%10/5,n%25%10%5,n/25+n%25/10+n%25%10/5+n%25%10%5);
}	
