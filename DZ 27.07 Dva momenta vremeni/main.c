#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int h,m,s,h1,m1,s1;		// h - hours m - minutes s - sekonds  find interval between 2 moments
	scanf("%d %d %d",&h,&m,&s);
	scanf("%d %d %d",&h1,&m1,&s1);

//	if ((a<=30000) && (a>=0) && (b<100) && (b>=0) && (n<=30000) && (n>=0)) 
	printf("%d\n",((h1-1)*3600+(m1-1)*60+s1)-((h-1)*3600+(m-1)*60+s));
	return 0;
}


