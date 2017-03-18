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

void shellSort(int MAX, int intArray[]) {
   int inner, outer;
   int valueToInsert;
   int interval = 1;   
   int elements = MAX;
   int i = 0;
   
   while(interval <= elements/3) {
      interval = interval*3 +1;
   }

   while(interval > 0) {
 //   printf("iteration %d#:",i); 
 //   display(MAX,intArray);
      
      for(outer = interval; outer < elements; outer++) {
         valueToInsert = intArray[outer];
         inner = outer;
			
         while(inner > interval -1 && intArray[inner - interval] 
            >= valueToInsert) {
            intArray[inner] = intArray[inner - interval];
            inner -=interval;
 //         printf(" item moved :%d\n",intArray[inner]);
         }
         
         intArray[inner] = valueToInsert;
 //      printf(" item inserted :%d, at position :%d\n",valueToInsert,inner);
      }
		
      interval = (interval -1) /3;
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
//   display(MAX,intArray);
   printline(50);
   clock_t tsort;
   tsort = clock();
   shellSort(MAX,intArray);
   tsort = clock() - tsort;
   printf("Output Array: ");
 //  display(MAX,intArray);
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