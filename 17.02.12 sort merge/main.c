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

void merge(int intArray[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = intArray[l + i];
    for (j = 0; j < n2; j++)
        R[j] = intArray[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            intArray[k] = L[i];
            i++;
        }
        else
        {
            intArray[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        intArray[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        intArray[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int intArray[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(intArray, l, m);
        mergeSort(intArray, m+1, r);
 
        merge(intArray, l, m, r);
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
//   display(MAX,intArray);
   printline(50);
   clock_t tsort;
   tsort = clock();
   //
	mergeSort(intArray, 0, MAX-1);
   //
//   shellSort(MAX,intArray);
   tsort = clock() - tsort;
   printf("Output Array: ");
//   display(MAX,intArray);
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