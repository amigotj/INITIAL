#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 4533543;
	int *pa = &a;						//// p-- ukazatel
	printf("\n%p   ADDRESS pa",pa);
	printf("\n%d   ZNA4ENIE *pa",*pa);	
	printf("\n%p   ADDRESS &a",&a);
	printf("\n%d   ZNA4ENIE a",a);
	printf("\n---- %p   ADRESS ADRESSA &pa",&pa);	
	
	printf("\n");
		return 0;
}
