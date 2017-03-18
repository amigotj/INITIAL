#include <stdio.h>
#include <stdbool.h>
#include <time.h>
// #define MAX 7

//int intArray[MAX] = {4,6,3,2,1,9,7};

void printline(int count) {
   int i;
	
   for(i = 0;i <count-1;i++) {
      printf("=");
   }
	
   printf("=\n");
}

void display(int MAX, int intArray[]) {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0;i<MAX;i++) {
      printf("%d ",intArray[i]);
   }
	
   printf("]\n");
}

void selectSort(int intArray[], int MAX)
{
	int i,j=0;
	int temp;
	while (i<MAX)
	{
		j=i;
		while (j<MAX)
		{
			if (intArray[i]>intArray[j])
			{
				temp=intArray[i];
				intArray[i]=intArray[j];
				intArray[j]=temp;
			}
			j++;
		}
		i++;
	}
	
}

int main() {
	clock_t t;
	t = clock();
	printline(50);  
	printline(50);	
	int MAX=0;
	FILE * input;

	input = fopen("C:\\7DVD\\input.txt","r");
	
	int	buffer = 0;
	
	while (fscanf(input,"%d",&buffer)!=EOF)
	{
		MAX++;
//		printf("%d ",buffer);		
	}
	fclose(input);
	input = fopen("C:\\7DVD\\input.txt","r");
	int intArray[MAX];
	int i=0;
	while (fscanf(input,"%d",&buffer)!=EOF)
	{
//		printf("%d ",buffer);		
		intArray[i]=buffer;
		i++;
	}
	
	printf("\n");
	printline(50);
	
   printf("Input Array: ");
   display(MAX,intArray);
   printline(50);
   clock_t tsort;
   tsort = clock();
   //
	selectSort(intArray, MAX);
   //
//   shellSort(MAX,intArray);
   tsort = clock() - tsort;
   printf("Output Array: ");
   display(MAX,intArray);
   printline(50);
   t = clock()-t;
   printf("Total time in clicks =%d= in seconds =%f=\n",(int)t,((double)t)/CLOCKS_PER_SEC);
   printf("Sort time in clicks =%d= in seconds =%f=\n",(int)tsort,((double)tsort)/CLOCKS_PER_SEC);
   i=0;
	FILE * output;
	output = fopen("C:\\7DVD\\output.txt","w");
   while(i<MAX)
   {
   	fprintf(output,"%d ",intArray[i]);
   	i++;
   }
   return 0;
}

/*
   printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
 */
///http://quiz.geeksforgeeks.org/merge-sort/