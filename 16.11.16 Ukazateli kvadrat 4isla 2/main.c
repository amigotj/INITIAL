
#include <stdio.h>
#include <string.h>

void cub_f (int *n_ptr)
{
	*n_ptr=*n_ptr**n_ptr**n_ptr;
}

int main(int argc, char *argv[])
{
	int x;
	printf("\nVvedite 4isl0\n  ");
	scanf("%d",&x);
	cub_f(&x);
	printf("\n  %d\n",x);
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
 