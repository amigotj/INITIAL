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
/*
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
*/
int main() {

	printline(50);  
	printline(50);	
	FILE * output;
	output = fopen("C:\\7DVD\\input.txt","w");
	printf("input amount of numbers =count= upper and lower limit of variation =high= =low=\n");
	int count;
	scanf("%d",&count);
	int high;
	scanf("%d",&high);
	int low;
	scanf("%d",&low);
	int mass[count];
	int i=0;	
	srand(time(0));
	while(i<count)	{
		mass[i]=rand()%(high-low+1)+low; //rand()%n-m
//		printf("%d ",mass[i]);
		fprintf(output,"%d ",mass[i]);
		i++;
	}
	printf("\n");
}



/*	int	buffer = 0;
	
	while (fscanf(input,"%d",&buffer)!=EOF)
	{
		MAX++;
//		printf("%d ",buffer);		
	}
	fclose(input);
	input = fopen("input.txt","r");
	int intArray[MAX];
	int i=0;
	while (fscanf(input,"%d",&buffer)!=EOF)
	{
		printf("%d ",buffer);		
		intArray[i]=buffer;
		i++;
	}
	
	printf("\n");
	printline(50);
	
   printf("Input Array: ");
   display(MAX,intArray);
   printline(50);
   shellSort(MAX,intArray);
   printf("Output Array: ");
   display(MAX,intArray);
   printline(50);
   return 1;
}
*/