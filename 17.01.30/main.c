#include <stdio.h>
void sort(int*, int);

int main(int argc, char *argv[])
{
	int dlina;
	scanf("%d",&dlina);
	int massiv[dlina]; // = {1,2,3};
//	printf("\n%d %d %d\n",massiv[0],massiv[1],massiv[2]);
	if (dlina<=0) return 1;
	int i=0;
	while (i<dlina)
	{
		scanf("%d",&massiv[i]);
		i++;
	}
	sort(massiv,dlina);
	printf("Hello C-Free!\n");
	return 0;
}

void sort(int massiv1[], int dlina)
{
	int i=0;
	while (i<dlina)
	{
		printf("%d",massiv1[i]);
		i++;	
	}	
	printf("\n");
	i=0;

	int j;
	int temp;
	while (i<dlina)
	{
		j=i;
		if(massiv1[i]%2==0)
		{
			while(j<dlina)
			{
				if(massiv1[j]%2==0 && massiv1[j]<massiv1[i])
				{
					temp=massiv1[j];
					massiv1[j]=massiv1[i];
					massiv1[i]=temp;
				}
				j++;
			}	
		}
		else
		{
			while(j<dlina)
			{
				if(massiv1[j]%2!=0 && massiv1[j]>massiv1[i])
				{
					temp=massiv1[j];
					massiv1[j]=massiv1[i];
					massiv1[i]=temp;
				}
				j++;
			}	
		}
		i++;
	}
	i=0;	
	while (i<dlina)
	{
		printf("%d",massiv1[i]);
		i++;	
	}	
	printf("\n");
	printf("\n");	
}
