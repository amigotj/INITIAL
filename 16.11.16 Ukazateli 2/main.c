
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int a;
	int *a_ptr;
	a=7;
	a_ptr=&a;
	printf("\nadress a %p\n  ",&a);
	printf("\nadress a_ptr %p\n  ",a_ptr);
	printf("\nvalues a %d\n  ",a);
	printf("\nvalues *a_ptr %d\n  ",*a_ptr);	
	return 0;
}
// без звезды выводит адресс  "a_ptr" (436737FF) а со звездой что по этому адресу леджит "*a_ptr" (7)	


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
 