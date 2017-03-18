#include <stdio.h>
void xXx (int n, char c);
int main(int argc, char *argv[])
{
	int n;
	char c;
	c = 'a';
	printf("Input < char >\n");
	scanf("%c",&c);	
	n = 0;
	while ((n<2) || (n>25))
	{
		printf("\nInput < N >  (2 - 25) \n");
		scanf("%d",&n);
	}

	printf("\n");
//	scanf("%c",&c);	
//	cchar = 'a';
	
	xXx(n, c);
	printf("\nHello C-Free < n = %d >\n",n);
	return 0;
}

void xXx (int n, char c)
{
	int i,j,probel,n2;
	i = 1;
	j = 1;
	n2=n-2;
	printf("\n");
	while (i<n)
	{
		probel=n2;
		while (probel>0)
		{
			printf(" ");
			probel--;
		}
		while (j<=(i+1))
		{
			printf("%c",c);
			j++;	
		}
		n2--;
		i++;
		j=1;
		printf("\n");
	}	
}	
