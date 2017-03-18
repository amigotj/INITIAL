#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	printf("\n");
	int A[n];
	int i;
	int summ;
	i=0;
	while (i<n)
	{
		scanf("%d",&A[i]);
		i++;
	} 
	printf("\n\n");
	
	i=-1;
	while (i<n-3)
	{
		i++;
		if (A[i]+A[i+2]>A[i+1]+A[i+3])
		{
//			if ((i==0) || (i==1)) summ=summ+A[i+1]+A[i+3];
//			if ((i!=0) || (i!=1))	summ=summ+A[i+3];
			A[i+2]=0;
			i=i+2;
		}
		else
		{
//			if ((i==0) || (i==1)) summ=summ+A[i]+A[i+2];
//			if ((i!=0) || (i!=1))	summ=summ+A[i+2];
			A[i+1]=0;
			i=i+1;			
		} 

	} 
	summ=0;
	i=0;
	while (i<n)
	{
		summ=summ+A[i];
		printf("%d ",A[i]);
		i++;
	}
	printf("\n");	
	


	printf("\n\n <<< n >>> <<<< i >>>> <<< summ >>> <<< answer >>> %d  %d  %d  %d \n\n",n,i,summ, factr(3));
/*	int mat;
	mat=abs(3-5);
	printf("%d",mat);
*/	return 0;
}


	int factr(int n)
	{
	int answer;
	if(n==1) return(1);
	answer = factr(n-1)*n;
	return(answer);
	}