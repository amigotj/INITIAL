#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,ch1,ch2;		// 4етырехзначное число   является ли оно симетричным   2002 то 1
	//float c;
//	printf("Vvedite  a\n");
	scanf("%d",&a);
//	printf("esli edenica to 4islo semetri4noe\n");
//	printf("%d\n",(((((a/1000)/(a%10))+((a/100)%10)/((a/10)%10))))/2); //   
//	printf("%d\n",((a/1000+(a/100)%10)/((a/10)%10+a%10))); //   
    ch1=a/100;
    ch2=a%100;
    ch2=ch2%10*10+ch2/10;
	printf("%d\n",ch1-ch2+1);
	return 0;
}