#include <stdio.h>
void displ (int*, int*, int);
void sort (int*, int*, int);


int main(int argc, char *argv[])
{
//	printf("input number of sportsmen\n");
	int n;
	scanf("%d",&n);
	int sportsmenID[n];     // = {2,1,5,3};
	int rating[n];
	int i;
	for (i=0; i<n; i++)
	{
//		printf("input sportsmenID[%d] and rating[%d]\n",i,i);
		scanf("%d",&sportsmenID[i]);	
		scanf("%d",&rating[i]);		
	}
	sort(sportsmenID,rating,n);
	
	
//	printf("\n==========\n");	
	displ(sportsmenID,rating,n);
	return 0;
}


void sort(int *sportsmenID, int *rating, int n)
{
//	displ(sportsmenID,rating,n);
//	printf("==========");
	int i;
	int j;
	int temp;
	int temp2;
	for (i=1; i<=(n-1); i++)
	{
		j=i;
		while(j>0 && rating[j-1]<=rating[j])
		{
			temp=rating[j];
			rating[j]=rating[j-1];
			rating[j-1]=temp;
			temp2=sportsmenID[j];
			sportsmenID[j]=sportsmenID[j-1];
			sportsmenID[j-1]=temp2;
//			displ(sportsmenID,rating,n);
			if ((rating[j]==rating[j-1]) && (sportsmenID[j-1]>sportsmenID[j]))
			{
				temp=rating[j];
				rating[j]=rating[j-1];
				rating[j-1]=temp;
				temp2=sportsmenID[j];
				sportsmenID[j]=sportsmenID[j-1];
				sportsmenID[j-1]=temp2;	
			}
			j--;
			
		}
		
	}
}

void displ(int *sportsmenID, int *rating, int n)
{
	int i;
//	printf("\n");
	for (i=0; i<n; i++)
	{
		printf("%d %d\n",sportsmenID[i],rating[i]);
	}
//	printf("\n");
}