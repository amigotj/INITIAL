#include <stdio.h>
void fun(int **array, int sizey, int sizex) 
{ 
  int *p_array=(int*)array; 
  int x=1, y=3; 
  int value, i,j;
  value=p_array[ y * sizex + x ]; // [ x ][ y ] 

  for(i=0;i<sizex;i++)
  {
  	for(j=0;j<sizey;j++)
	  	{
	  	  	p_array[ i * sizex + j ] = i+j;
  			printf(" [%d][%d]= %d ",i,j,p_array[ i * sizex + j ]);
	  	
	  	}
  printf("\n");
  }
}
void main(void)
{
 int table[5][4];
 fun((int**)table, 5, 4);
 printf("\n%d\n",table[1][1]);
}