#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void genfile (int count, int high, int low);
void itoa1(int, char );
void reverse(char s[]);

int main(int argc, char *argv[])
{
	int count;
	int low;
	int high;
	printf("\nVvedite = count =  = high =  = low = \n");
	scanf("%d",&count);
	scanf("%d",&high);
	scanf("%d",&low);
	
//	count=100;
//	high=60;
//	low=-40;
	genfile(count,high,low);
	

	return 0;
}
void genfile (int count, int high, int low)
{
	FILE *ptr_fileW;
	ptr_fileW =fopen("output.txt", "wt");
	if (!ptr_fileW)
		return 1;
	int i;
	int summ;
	int buff[count];
	char buffchar[5000];
	i = 0;
 	srand (time(NULL));
 	summ=high-low;
	while (i<count)
	{
		buff[i]= (int) rand()% (summ) + low;
		fprintf(ptr_fileW,"%d, ",buff[i]);
		printf("%d ",buff[i]);		
		i++;
	}
	printf("\n");
	itoa(1150,buffchar,10);
	fputs(buffchar,stdout);
	printf("\n");

}

/*	
void itoa1(int n, char s[])
 {
     int i, sign;
 
     if ((sign = n) < 0)  
         n = -n;          
     i = 0;
     do {       
         s[i++] = n % 10 + '0';  
     } while ((n /= 10) > 0);     
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }
 
  void reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }
 */