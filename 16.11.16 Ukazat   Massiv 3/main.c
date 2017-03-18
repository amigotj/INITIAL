
#include <stdio.h>
#include <string.h>

void array_char_f (char *adress_pervogo_elementa_massiva)
{
	while(*adress_pervogo_elementa_massiva!='\0')
	{
		*adress_pervogo_elementa_massiva=*adress_pervogo_elementa_massiva-32;
		adress_pervogo_elementa_massiva++;
	}
}

int main(int argc, char *argv[])
{
	char array_char[]="mmmaaad";
	printf("    %s\n    ",array_char);
	array_char_f(&array_char);
	printf("%s\n",array_char);
	return 0;
}
	


/*
#include <stdio.h>
#include <string.h>

int cub_f (int x)
{
	int cub_pr;
	cub_pr=x*x*x;
	return cub_pr;
}

int main(int argc, char *argv[])
{
	int x;
	printf("\nVvedite 4isl0\n  ");
	scanf("%d",&x);
	printf("\n  %d\n",cub_f(x));
	return 0;
}
*/	
 