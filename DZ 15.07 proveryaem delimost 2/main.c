#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b;		// если делится нацело то еденица, если нет то любое число
	//float c;
//	printf("Vvedite  a  i  b  \n");
	scanf("%d",&a);
	scanf("%d",&b);
//	printf("esli edenica to deletsya nacelo, eslu luboe drugoe to ne delitsya\n");
	printf("%d\n",((a%b)*(b%a) + 1)); //
	return 0;
}