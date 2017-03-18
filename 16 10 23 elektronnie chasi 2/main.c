#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,qwe;
	scanf("%d",&n);
	printf("%d:%0.2d:%0.2d",n/3600%24,n%3600/60,n%3600%60);
	scanf("%d",&qwe);
	return 0;
}